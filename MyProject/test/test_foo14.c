#ifdef TEST

#include "unity.h"

#include "foo14.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo14(void)
{
  TEST_ASSERT_EQUAL_INT(14, run_foo14());
}

#endif // TEST
