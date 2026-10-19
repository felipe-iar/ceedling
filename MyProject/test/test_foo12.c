#ifdef TEST

#include "unity.h"

#include "foo12.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo12(void)
{
  TEST_ASSERT_EQUAL_INT(12, run_foo12());
}

#endif // TEST
