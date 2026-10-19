#ifdef TEST

#include "unity.h"

#include "foo60.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo60(void)
{
  TEST_ASSERT_EQUAL_INT(60, run_foo60());
}

#endif // TEST
