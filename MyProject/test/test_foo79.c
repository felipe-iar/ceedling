#ifdef TEST

#include "unity.h"

#include "foo79.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_foo79(void)
{
  TEST_ASSERT_EQUAL_INT(79, run_foo79());
}

#endif // TEST
