#ifdef TEST

#include "unity.h"

#include "foo35.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo35(void)
{
  TEST_ASSERT_EQUAL_INT(35, run_foo35());
}

#endif // TEST
