#ifdef TEST

#include "unity.h"

#include "foo39.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo39(void)
{
  TEST_ASSERT_EQUAL_INT(39, run_foo39());
}

#endif // TEST
