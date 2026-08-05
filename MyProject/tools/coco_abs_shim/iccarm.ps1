# Absolutize C/C++ source arguments, then call the Squish Coco IAR iccarm wrapper.
# Ceedling compiles with relative paths like "src/Demo.c"; CoverageScanner then
# stores doubled paths (src/src/Demo.c). Absolute inputs avoid that.
$ErrorActionPreference = 'Stop'
$cocoIccarm = 'C:\Installations\squishcoco\IAR\ARM\iccarm.exe'

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

& $cocoIccarm @argsOut
exit $LASTEXITCODE
