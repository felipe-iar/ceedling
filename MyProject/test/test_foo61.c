#ifdef TEST

#include "unity.h"

#include "foo61.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo61(void)
{
  TEST_ASSERT_EQUAL_INT(61, run_foo61());
}

#endif // TEST
