#ifdef TEST

#include "unity.h"

#include "foo11.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo11(void)
{
  TEST_ASSERT_EQUAL_INT(11, run_foo11());
}

#endif // TEST
