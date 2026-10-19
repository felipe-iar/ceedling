#ifdef TEST

#include "unity.h"

#include "foo64.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo64(void)
{
  TEST_ASSERT_EQUAL_INT(64, run_foo64());
}

#endif // TEST
