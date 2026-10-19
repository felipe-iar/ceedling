#ifdef TEST

#include "unity.h"

#include "foo9.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo9(void)
{
  TEST_ASSERT_EQUAL_INT(9, run_foo9());
}

#endif // TEST
