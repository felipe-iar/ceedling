#ifdef TEST

#include "unity.h"

#include "foo58.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo58(void)
{
  TEST_ASSERT_EQUAL_INT(58, run_foo58());
}

#endif // TEST
