@echo off
REM Absolutizing launcher for Coco's IAR iccarm wrapper (same idea as gcc.bat).
powershell -NoProfile -ExecutionPolicy Bypass -File "%~dp0iccarm.ps1" %*
exit /b %ERRORLEVEL%
