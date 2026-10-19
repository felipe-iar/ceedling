#ifdef TEST

#include "unity.h"

#include "foo33.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo33(void)
{
  TEST_ASSERT_EQUAL_INT(33, run_foo33());
}

#endif // TEST
