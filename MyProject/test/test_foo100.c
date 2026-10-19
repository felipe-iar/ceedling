#ifdef TEST

#include "unity.h"

#include "foo100.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo100(void)
{
  TEST_ASSERT_EQUAL_INT(100, run_foo100());
}

#endif // TEST
