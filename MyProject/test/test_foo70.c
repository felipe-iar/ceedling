#ifdef TEST

#include "unity.h"

#include "foo70.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo70(void)
{
  TEST_ASSERT_EQUAL_INT(70, run_foo70());
}

#endif // TEST
