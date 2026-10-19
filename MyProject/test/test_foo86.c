#ifdef TEST

#include "unity.h"

#include "foo86.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo86(void)
{
  TEST_ASSERT_EQUAL_INT(86, run_foo86());
}

#endif // TEST
