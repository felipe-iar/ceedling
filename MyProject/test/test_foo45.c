#ifdef TEST

#include "unity.h"

#include "foo45.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo45(void)
{
  TEST_ASSERT_EQUAL_INT(45, run_foo45());
}

#endif // TEST
