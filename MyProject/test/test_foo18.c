#ifdef TEST

#include "unity.h"

#include "foo18.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo18(void)
{
  TEST_ASSERT_EQUAL_INT(18, run_foo18());
}

#endif // TEST
