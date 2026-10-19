#ifdef TEST

#include "unity.h"

#include "foo62.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo62(void)
{
  TEST_ASSERT_EQUAL_INT(62, run_foo62());
}

#endif // TEST
