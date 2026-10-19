#ifdef TEST

#include "unity.h"

#include "foo91.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo91(void)
{
  TEST_ASSERT_EQUAL_INT(91, run_foo91());
}

#endif // TEST
