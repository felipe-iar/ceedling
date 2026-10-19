#ifdef TEST

#include "unity.h"

#include "foo73.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo73(void)
{
  TEST_ASSERT_EQUAL_INT(73, run_foo73());
}

#endif // TEST
