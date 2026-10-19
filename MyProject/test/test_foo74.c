#ifdef TEST

#include "unity.h"

#include "foo74.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo74(void)
{
  TEST_ASSERT_EQUAL_INT(74, run_foo74());
}

#endif // TEST
