#ifdef TEST

#include "unity.h"

#include "foo71.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo71(void)
{
  TEST_ASSERT_EQUAL_INT(71, run_foo71());
}

#endif // TEST
