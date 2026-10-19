#ifdef TEST

#include "unity.h"

#include "foo97.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo97(void)
{
  TEST_ASSERT_EQUAL_INT(97, run_foo97());
}

#endif // TEST
