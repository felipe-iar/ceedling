@echo off
REM =========================================================================
REM   Ceedling - Test-Centered Build System for C
REM   ThrowTheSwitch.org
REM   Copyright (c) 2010-24 Mike Karlesky, Mark VanderVoord, & Greg Williams
REM   SPDX-License-Identifier: MIT
REM =========================================================================

REM --ruby-replacement allows "#{ENV['PATH']}" (and similar) in mixins
ruby "%~dp0vendor\ceedling\bin\ceedling" --ruby-replacement %*
