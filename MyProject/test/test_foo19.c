#ifdef TEST

#include "unity.h"

#include "foo19.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo19(void)
{
  TEST_ASSERT_EQUAL_INT(19, run_foo19());
}

#endif // TEST
