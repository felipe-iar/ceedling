#ifdef TEST

#include "unity.h"

#include "foo25.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo25(void)
{
  TEST_ASSERT_EQUAL_INT(25, run_foo25());
}

#endif // TEST
