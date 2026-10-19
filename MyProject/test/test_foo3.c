#ifdef TEST

#include "unity.h"

#include "foo3.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo3(void)
{
  TEST_ASSERT_EQUAL_INT(3, run_foo3());
}

#endif // TEST
