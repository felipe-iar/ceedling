#ifdef TEST

#include "unity.h"

#include "foo99.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo99(void)
{
  TEST_ASSERT_EQUAL_INT(99, run_foo99());
}

#endif // TEST
