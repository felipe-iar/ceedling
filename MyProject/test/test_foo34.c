#ifdef TEST

#include "unity.h"

#include "foo34.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo34(void)
{
  TEST_ASSERT_EQUAL_INT(34, run_foo34());
}

#endif // TEST
