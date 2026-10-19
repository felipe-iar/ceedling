#ifdef TEST

#include "unity.h"

#include "foo7.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo7(void)
{
  TEST_ASSERT_EQUAL_INT(7, run_foo7());
}

#endif // TEST
