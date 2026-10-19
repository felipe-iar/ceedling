#ifdef TEST

#include "unity.h"

#include "foo94.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo94(void)
{
  TEST_ASSERT_EQUAL_INT(94, run_foo94());
}

#endif // TEST
