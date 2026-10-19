#ifdef TEST

#include "unity.h"

#include "foo89.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo89(void)
{
  TEST_ASSERT_EQUAL_INT(89, run_foo89());
}

#endif // TEST
