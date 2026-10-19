#ifdef TEST

#include "unity.h"

#include "foo42.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo42(void)
{
  TEST_ASSERT_EQUAL_INT(42, run_foo42());
}

#endif // TEST
