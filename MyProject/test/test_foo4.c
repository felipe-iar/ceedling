#ifdef TEST

#include "unity.h"

#include "foo4.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo4(void)
{
  TEST_ASSERT_EQUAL_INT(4, run_foo4());
}

#endif // TEST
