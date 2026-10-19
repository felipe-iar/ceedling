#ifdef TEST

#include "unity.h"

#include "foo53.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo53(void)
{
  TEST_ASSERT_EQUAL_INT(53, run_foo53());
}

#endif // TEST
