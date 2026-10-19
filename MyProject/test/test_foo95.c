#ifdef TEST

#include "unity.h"

#include "foo95.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo95(void)
{
  TEST_ASSERT_EQUAL_INT(95, run_foo95());
}

#endif // TEST
