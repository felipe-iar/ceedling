#ifdef TEST

#include "unity.h"

#include "foo68.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo68(void)
{
  TEST_ASSERT_EQUAL_INT(68, run_foo68());
}

#endif // TEST
