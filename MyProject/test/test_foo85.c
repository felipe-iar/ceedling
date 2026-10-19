#ifdef TEST

#include "unity.h"

#include "foo85.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo85(void)
{
  TEST_ASSERT_EQUAL_INT(85, run_foo85());
}

#endif // TEST
