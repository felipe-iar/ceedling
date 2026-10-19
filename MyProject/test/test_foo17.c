#ifdef TEST

#include "unity.h"

#include "foo17.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo17(void)
{
  TEST_ASSERT_EQUAL_INT(17, run_foo17());
}

#endif // TEST
