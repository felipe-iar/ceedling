#ifdef TEST

#include "unity.h"

#include "foo67.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo67(void)
{
  TEST_ASSERT_EQUAL_INT(67, run_foo67());
}

#endif // TEST
