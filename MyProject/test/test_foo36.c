#ifdef TEST

#include "unity.h"

#include "foo36.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo36(void)
{
  TEST_ASSERT_EQUAL_INT(36, run_foo36());
}

#endif // TEST
