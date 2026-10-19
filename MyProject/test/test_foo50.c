#ifdef TEST

#include "unity.h"

#include "foo50.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo50(void)
{
  TEST_ASSERT_EQUAL_INT(50, run_foo50());
}

#endif // TEST
