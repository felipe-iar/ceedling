#ifdef TEST

#include "unity.h"

#include "foo93.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo93(void)
{
  TEST_ASSERT_EQUAL_INT(93, run_foo93());
}

#endif // TEST
