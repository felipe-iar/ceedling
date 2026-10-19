#ifdef TEST

#include "unity.h"

#include "foo75.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo75(void)
{
  TEST_ASSERT_EQUAL_INT(75, run_foo75());
}

#endif // TEST
