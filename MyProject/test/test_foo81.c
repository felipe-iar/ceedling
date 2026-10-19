#ifdef TEST

#include "unity.h"

#include "foo81.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo81(void)
{
  TEST_ASSERT_EQUAL_INT(81, run_foo81());
}

#endif // TEST
