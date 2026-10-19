#ifdef TEST

#include "unity.h"

#include "foo63.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo63(void)
{
  TEST_ASSERT_EQUAL_INT(63, run_foo63());
}

#endif // TEST
