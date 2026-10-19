#ifdef TEST

#include "unity.h"

#include "foo77.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo77(void)
{
  TEST_ASSERT_EQUAL_INT(77, run_foo77());
}

#endif // TEST
