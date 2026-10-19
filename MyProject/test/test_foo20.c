#ifdef TEST

#include "unity.h"

#include "foo20.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo20(void)
{
  TEST_ASSERT_EQUAL_INT(20, run_foo20());
}

#endif // TEST
