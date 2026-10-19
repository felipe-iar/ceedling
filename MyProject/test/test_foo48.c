#ifdef TEST

#include "unity.h"

#include "foo48.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo48(void)
{
  TEST_ASSERT_EQUAL_INT(48, run_foo48());
}

#endif // TEST
