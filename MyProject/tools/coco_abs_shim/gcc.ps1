# Absolutize C/C++ source arguments, then call the Squish Coco MinGW gcc wrapper.
# Ceedling compiles with relative paths like "src/Demo.c"; CoverageScanner then
# stores doubled paths (src/src/Demo.c). Absolute inputs avoid that, so
# CoverageBrowser can open the real source files from the .csmes alone.
$ErrorActionPreference = 'Stop'
$cocoGcc = 'C:\Installations\squishcoco\mingw1310_64\wrapper\gcc.exe'

$argsOut = foreach ($arg in $args) {
    $a = $arg.Trim('"')
    if ($a -match '(?i)\.(c|cc|cpp|cxx)$' -and -not [System.IO.Path]::IsPathRooted($a)) {
        if (Test-Path -LiteralPath $a) {
            (Resolve-Path -LiteralPath $a).Path
        } else {
            $a
        }
    } else {
        $a
    }
}

& $cocoGcc @argsOut
exit $LASTEXITCODE
