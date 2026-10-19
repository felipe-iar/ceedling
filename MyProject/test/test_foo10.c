#ifdef TEST

#include "unity.h"

#include "foo10.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo10(void)
{
  TEST_ASSERT_EQUAL_INT(10, run_foo10());
}

#endif // TEST
