#ifdef TEST

#include "unity.h"

#include "foo92.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo92(void)
{
  TEST_ASSERT_EQUAL_INT(92, run_foo92());
}

#endif // TEST
