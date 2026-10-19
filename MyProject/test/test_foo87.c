#ifdef TEST

#include "unity.h"

#include "foo87.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo87(void)
{
  TEST_ASSERT_EQUAL_INT(87, run_foo87());
}

#endif // TEST
