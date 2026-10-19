#ifdef TEST

#include "unity.h"

#include "foo27.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo27(void)
{
  TEST_ASSERT_EQUAL_INT(27, run_foo27());
}

#endif // TEST
