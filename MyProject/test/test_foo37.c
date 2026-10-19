#ifdef TEST

#include "unity.h"

#include "foo37.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo37(void)
{
  TEST_ASSERT_EQUAL_INT(37, run_foo37());
}

#endif // TEST
