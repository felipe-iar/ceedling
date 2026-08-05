@echo off
REM Thin launcher so PATH lookup finds "gcc" and runs our absolutizing shim.
powershell -NoProfile -ExecutionPolicy Bypass -File "%~dp0gcc.ps1" %*
exit /b %ERRORLEVEL%
