#ifdef TEST

#include "unity.h"

#include "foo76.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo76(void)
{
  TEST_ASSERT_EQUAL_INT(76, run_foo76());
}

#endif // TEST
