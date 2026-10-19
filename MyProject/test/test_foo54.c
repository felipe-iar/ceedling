#ifdef TEST

#include "unity.h"

#include "foo54.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo54(void)
{
  TEST_ASSERT_EQUAL_INT(54, run_foo54());
}

#endif // TEST
