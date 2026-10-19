#ifdef TEST

#include "unity.h"

#include "foo21.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo21(void)
{
  TEST_ASSERT_EQUAL_INT(21, run_foo21());
}

#endif // TEST
