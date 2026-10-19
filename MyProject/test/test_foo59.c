#ifdef TEST

#include "unity.h"

#include "foo59.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo59(void)
{
  TEST_ASSERT_EQUAL_INT(59, run_foo59());
}

#endif // TEST
