#ifdef TEST

#include "unity.h"

#include "foo26.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo26(void)
{
  TEST_ASSERT_EQUAL_INT(26, run_foo26());
}

#endif // TEST
