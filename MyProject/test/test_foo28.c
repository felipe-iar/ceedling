#ifdef TEST

#include "unity.h"

#include "foo28.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo28(void)
{
  TEST_ASSERT_EQUAL_INT(28, run_foo28());
}

#endif // TEST
