#ifdef TEST

#include "unity.h"

#include "foo88.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo88(void)
{
  TEST_ASSERT_EQUAL_INT(88, run_foo88());
}

#endif // TEST
