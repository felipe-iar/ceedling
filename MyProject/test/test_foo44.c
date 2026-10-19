#ifdef TEST

#include "unity.h"

#include "foo44.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo44(void)
{
  TEST_ASSERT_EQUAL_INT(44, run_foo44());
}

#endif // TEST
