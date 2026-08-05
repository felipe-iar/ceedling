
#ifdef TEST

#include "unity.h"

#include "Demo.h"

#if defined(__ICCARM__) && defined(__COVERAGESCANNER__)
#include "coco_stdout_io.h"
#endif

void setUp(void)
{
#if defined(__ICCARM__) && defined(__COVERAGESCANNER__)
  /* CSpy has no default .csexe file I/O — register stdout custom I/O. */
  coco_stdout_io_init();
#endif
}

void tearDown(void)
{
#if defined(__ICCARM__) && defined(__COVERAGESCANNER__)
  /* Explicit save: do not rely on atexit under CSpy. */
  coco_stdout_io_save();
#endif
}

void test_RunningDemo_should_DoNormalOperations(void)
{
  TEST_ASSERT_EQUAL_INT(3, run_demo(1,1));
  TEST_ASSERT_EQUAL_INT(6, run_demo(2,2));
  TEST_ASSERT_EQUAL_INT(13, run_demo(4,5));
}

#endif // TEST
