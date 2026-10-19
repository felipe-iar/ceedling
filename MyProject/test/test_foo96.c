#ifdef TEST

#include "unity.h"

#include "foo96.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo96(void)
{
  TEST_ASSERT_EQUAL_INT(96, run_foo96());
}

#endif // TEST
