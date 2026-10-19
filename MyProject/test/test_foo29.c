#ifdef TEST

#include "unity.h"

#include "foo29.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo29(void)
{
  TEST_ASSERT_EQUAL_INT(29, run_foo29());
}

#endif // TEST
