#ifdef TEST

#include "unity.h"

#include "foo65.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo65(void)
{
  TEST_ASSERT_EQUAL_INT(65, run_foo65());
}

#endif // TEST
