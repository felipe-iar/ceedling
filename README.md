# How Ceedling Works

See https://www.throwtheswitch.org/ceedling.

# Description

This project contains the example project from https://www.throwtheswitch.org/ceedling with a modified project.yml file that will work with the IAR Build Tools for Arm (Cloud Edition).

```bash
> ceedling

 Loaded project configuration from working directory.
 > Using: /home/felipeto/ceedling/MyProject/project.yml
 > Working directory: /home/ceedling/MyProject

------------------
🌱 EXAMPLE PROJECT
------------------
ℹ NOTICE: Enabled :test_runner ↳ :cmdline_args because :project ↳ :use_backtrace is enabled.

Ceedling set up completed in 43 milliseconds

👟 Preparing Build Paths...

👟 Collecting Essential Test Context
------------------------------------
Parsing test_Demo.c for user & system #includes...
Parsing test_Demo.c for build directive macros and test case names...

👟 Ingesting Test Configurations
--------------------------------
Collecting search paths, flags, and defines for test_Demo.c...

👟 Determining Files to Be Generated...

👟 Test Runners
---------------
Generating runner for test_Demo.c...

👟 Determining Artifacts to Be Built...

👟 Building Objects
-------------------
Compiling test_Demo.c...
Compiling test_Demo::Demo.c...
Compiling test_Demo::test_Demo_runner.c...
Compiling test_Demo::unity.c...

👟 Building Test Executables
----------------------------
Linking test_Demo.out...

👟 Executing
------------
Running test_Demo.out...

-----------------------
✅ OVERALL TEST SUMMARY
-----------------------
TESTED:  1
PASSED:  1
FAILED:  0
IGNORED: 0

Ceedling operations completed in 1.08 seconds
```
