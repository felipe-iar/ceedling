#ifdef TEST

#include "unity.h"

#include "foo23.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo23(void)
{
  TEST_ASSERT_EQUAL_INT(23, run_foo23());
}

#endif // TEST
