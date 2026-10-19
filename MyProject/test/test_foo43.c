#ifdef TEST

#include "unity.h"

#include "foo43.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo43(void)
{
  TEST_ASSERT_EQUAL_INT(43, run_foo43());
}

#endif // TEST
