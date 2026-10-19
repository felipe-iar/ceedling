#ifdef TEST

#include "unity.h"

#include "foo38.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo38(void)
{
  TEST_ASSERT_EQUAL_INT(38, run_foo38());
}

#endif // TEST
