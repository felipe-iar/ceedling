#ifdef TEST

#include "unity.h"

#include "foo1.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo1(void)
{
  TEST_ASSERT_EQUAL_INT(1, run_foo1());
}

#endif // TEST
