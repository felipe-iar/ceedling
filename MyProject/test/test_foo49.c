#ifdef TEST

#include "unity.h"

#include "foo49.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo49(void)
{
  TEST_ASSERT_EQUAL_INT(49, run_foo49());
}

#endif // TEST
