#ifdef TEST

#include "unity.h"

#include "foo83.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo83(void)
{
  TEST_ASSERT_EQUAL_INT(83, run_foo83());
}

#endif // TEST
