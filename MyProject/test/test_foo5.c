#ifdef TEST

#include "unity.h"

#include "foo5.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo5(void)
{
  TEST_ASSERT_EQUAL_INT(5, run_foo5());
}

#endif // TEST
