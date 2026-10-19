#ifdef TEST

#include "unity.h"

#include "foo98.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo98(void)
{
  TEST_ASSERT_EQUAL_INT(98, run_foo98());
}

#endif // TEST
