#ifdef TEST

#include "unity.h"

#include "foo84.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo84(void)
{
  TEST_ASSERT_EQUAL_INT(84, run_foo84());
}

#endif // TEST
