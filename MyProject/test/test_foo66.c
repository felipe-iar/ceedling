#ifdef TEST

#include "unity.h"

#include "foo66.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo66(void)
{
  TEST_ASSERT_EQUAL_INT(66, run_foo66());
}

#endif // TEST
