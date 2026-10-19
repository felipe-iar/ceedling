#ifdef TEST

#include "unity.h"

#include "foo2.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo2(void)
{
  TEST_ASSERT_EQUAL_INT(2, run_foo2());
}

#endif // TEST
