#ifdef TEST

#include "unity.h"

#include "foo90.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo90(void)
{
  TEST_ASSERT_EQUAL_INT(90, run_foo90());
}

#endif // TEST
