#ifdef TEST

#include "unity.h"

#include "foo31.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo31(void)
{
  TEST_ASSERT_EQUAL_INT(31, run_foo31());
}

#endif // TEST
