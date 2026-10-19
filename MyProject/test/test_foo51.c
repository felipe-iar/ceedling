#ifdef TEST

#include "unity.h"

#include "foo51.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo51(void)
{
  TEST_ASSERT_EQUAL_INT(51, run_foo51());
}

#endif // TEST
