#ifdef TEST

#include "unity.h"

#include "foo69.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo69(void)
{
  TEST_ASSERT_EQUAL_INT(69, run_foo69());
}

#endif // TEST
