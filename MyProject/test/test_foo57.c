#ifdef TEST

#include "unity.h"

#include "foo57.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo57(void)
{
  TEST_ASSERT_EQUAL_INT(57, run_foo57());
}

#endif // TEST
