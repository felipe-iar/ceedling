#ifdef TEST

#include "unity.h"

#include "foo22.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo22(void)
{
  TEST_ASSERT_EQUAL_INT(22, run_foo22());
}

#endif // TEST
