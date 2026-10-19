#ifdef TEST

#include "unity.h"

#include "foo24.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo24(void)
{
  TEST_ASSERT_EQUAL_INT(24, run_foo24());
}

#endif // TEST
