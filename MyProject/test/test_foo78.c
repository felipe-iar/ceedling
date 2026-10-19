#ifdef TEST

#include "unity.h"

#include "foo78.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo78(void)
{
  TEST_ASSERT_EQUAL_INT(78, run_foo78());
}

#endif // TEST
