#!/usr/bin/env ruby
# frozen_string_literal: true

# Extract CoverageScanner .csexe text dumped by IAR/CSpy custom I/O from a
# Ceedling test result file (.pass / .fail), write <exe>.csexe, then import
# into <exe>.csmes via cmcsexeimport.
#
# Usage: ruby tools/cspy_extract_csexe.rb <path-to-test-executable>
#
# Expects stdout markers from test/support/coco_stdout_io.c:
#   ===COCO_CSEXE_BEGIN===
#   ... csexe body ...
#   ===COCO_CSEXE_END===

require 'yaml'
require 'pathname'

BEGIN_MARK = '===COCO_CSEXE_BEGIN==='
END_MARK   = '===COCO_CSEXE_END==='

def die(msg, code = 1)
  warn "cspy_extract_csexe: #{msg}"
  exit code
end

def load_result_yaml(path)
  if YAML.respond_to?(:unsafe_load_file)
    YAML.unsafe_load_file(path)
  else
    YAML.load_file(path)
  end
end

def stdout_lines(data)
  raw = data[:stdout] || data['stdout'] || []
  raw.map(&:to_s)
end

def extract_body(lines)
  begin_i = lines.index { |l| l.include?(BEGIN_MARK) }
  end_i   = lines.index { |l| l.include?(END_MARK) }
  return nil if begin_i.nil? || end_i.nil? || end_i <= begin_i

  lines[(begin_i + 1)...end_i]
end

die('missing executable path argument') if ARGV.empty?

exe = Pathname.new(ARGV[0]).cleanpath
die("executable not found: #{exe}") unless exe.file?

# build/<root>/test/out/<test_name>/<test_name>.out
# -> build/<root>/test/results/<test_name>.pass|.fail
parts = exe.each_filename.to_a
out_i = parts.rindex('out')
die("cannot derive results path from #{exe} (expected .../test/out/<name>/...)") if out_i.nil? || out_i < 1

test_name = parts[out_i + 1]
build_root = Pathname.new(File.join(*parts[0...out_i.pred]))
results_dir = build_root.join('test', 'results')

result = [results_dir.join("#{test_name}.pass"), results_dir.join("#{test_name}.fail")]
           .find(&:file?)
die("no Ceedling result file for #{test_name} under #{results_dir}") if result.nil?

data = load_result_yaml(result.to_s)
body = extract_body(stdout_lines(data))
die("no #{BEGIN_MARK}..#{END_MARK} block in #{result}") if body.nil? || body.empty?

csexe = Pathname.new("#{exe}.csexe")
csmes = Pathname.new("#{exe}.csmes")
csexe.write(body.join("\n") + "\n")
puts "Wrote #{csexe} (#{body.size} lines from #{result.basename})"

die("missing instrumentation database: #{csmes}") unless csmes.file?

import_cmd = [
  'cmcsexeimport',
  '-m', csmes.to_s,
  '-e', csexe.to_s,
  '-t', exe.to_s,
  '-P',
  '-v'
]
puts import_cmd.join(' ')
ok = system(*import_cmd)
die("cmcsexeimport failed with status #{$?.exitstatus}") unless ok
