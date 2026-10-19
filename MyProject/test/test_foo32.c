#ifdef TEST

#include "unity.h"

#include "foo32.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo32(void)
{
  TEST_ASSERT_EQUAL_INT(32, run_foo32());
}

#endif // TEST
