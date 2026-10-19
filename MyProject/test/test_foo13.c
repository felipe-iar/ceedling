#ifdef TEST

#include "unity.h"

#include "foo13.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo13(void)
{
  TEST_ASSERT_EQUAL_INT(13, run_foo13());
}

#endif // TEST
