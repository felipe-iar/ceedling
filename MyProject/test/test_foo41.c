#ifdef TEST

#include "unity.h"

#include "foo41.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo41(void)
{
  TEST_ASSERT_EQUAL_INT(41, run_foo41());
}

#endif // TEST
