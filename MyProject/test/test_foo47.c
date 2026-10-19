#ifdef TEST

#include "unity.h"

#include "foo47.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo47(void)
{
  TEST_ASSERT_EQUAL_INT(47, run_foo47());
}

#endif // TEST
