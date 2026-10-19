#ifdef TEST

#include "unity.h"

#include "foo30.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo30(void)
{
  TEST_ASSERT_EQUAL_INT(30, run_foo30());
}

#endif // TEST
