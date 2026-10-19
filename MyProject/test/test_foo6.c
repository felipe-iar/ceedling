#ifdef TEST

#include "unity.h"

#include "foo6.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo6(void)
{
  TEST_ASSERT_EQUAL_INT(6, run_foo6());
}

#endif // TEST
