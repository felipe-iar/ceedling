#ifdef TEST

#include "unity.h"

#include "foo15.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo15(void)
{
  TEST_ASSERT_EQUAL_INT(15, run_foo15());
}

#endif // TEST
