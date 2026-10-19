#ifdef TEST

#include "unity.h"

#include "foo72.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo72(void)
{
  TEST_ASSERT_EQUAL_INT(72, run_foo72());
}

#endif // TEST
