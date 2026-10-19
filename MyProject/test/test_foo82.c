#ifdef TEST

#include "unity.h"

#include "foo82.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo82(void)
{
  TEST_ASSERT_EQUAL_INT(82, run_foo82());
}

#endif // TEST
