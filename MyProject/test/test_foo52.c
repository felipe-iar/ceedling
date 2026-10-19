#ifdef TEST

#include "unity.h"

#include "foo52.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo52(void)
{
  TEST_ASSERT_EQUAL_INT(52, run_foo52());
}

#endif // TEST
