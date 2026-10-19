#ifdef TEST

#include "unity.h"

#include "foo40.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo40(void)
{
  TEST_ASSERT_EQUAL_INT(40, run_foo40());
}

#endif // TEST
