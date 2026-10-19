#ifdef TEST

#include "unity.h"

#include "foo55.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo55(void)
{
  TEST_ASSERT_EQUAL_INT(55, run_foo55());
}

#endif // TEST
