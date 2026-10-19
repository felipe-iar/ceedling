#ifdef TEST

#include "unity.h"

#include "foo56.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo56(void)
{
  TEST_ASSERT_EQUAL_INT(56, run_foo56());
}

#endif // TEST
