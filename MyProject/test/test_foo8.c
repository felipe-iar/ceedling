#ifdef TEST

#include "unity.h"

#include "foo8.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo8(void)
{
  TEST_ASSERT_EQUAL_INT(8, run_foo8());
}

#endif // TEST
