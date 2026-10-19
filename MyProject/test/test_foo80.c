#ifdef TEST

#include "unity.h"

#include "foo80.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo80(void)
{
  TEST_ASSERT_EQUAL_INT(80, run_foo80());
}

#endif // TEST
