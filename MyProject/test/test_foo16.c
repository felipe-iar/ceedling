#ifdef TEST

#include "unity.h"

#include "foo16.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo16(void)
{
  TEST_ASSERT_EQUAL_INT(16, run_foo16());
}

#endif // TEST
