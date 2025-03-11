#include "unity.h"
#include "ft_atoi.h"
#include "unity_internals.h"
#include <stdlib.h>

void setUp(void)
{
    // set stuff up here
}

void tearDown(void)
{
    // clean stuff up here
}

void test_zero(void)
{
    //test stuff
	TEST_ASSERT_EQUAL_INT(0, ft_atoi("0"));
}

void test_zero_to_ten(void)
{
	TEST_ASSERT_EQUAL_INT(atoi("-0"), ft_atoi("-0"));
	TEST_ASSERT_EQUAL_INT(atoi("-1"), ft_atoi("-1"));
	TEST_ASSERT_EQUAL_INT(atoi("-2"), ft_atoi("-2"));
	TEST_ASSERT_EQUAL_INT(atoi("-3"), ft_atoi("-3"));
	TEST_ASSERT_EQUAL_INT(atoi("-4"), ft_atoi("-4"));
	TEST_ASSERT_EQUAL_INT(atoi("-5"), ft_atoi("-5"));
	TEST_ASSERT_EQUAL_INT(atoi("-6"), ft_atoi("-6"));
	TEST_ASSERT_EQUAL_INT(atoi("-7"), ft_atoi("-7"));
	TEST_ASSERT_EQUAL_INT(atoi("-8"), ft_atoi("-8"));
	TEST_ASSERT_EQUAL_INT(atoi("-9"), ft_atoi("-9"));
	TEST_ASSERT_EQUAL_INT(atoi("-10"), ft_atoi("-10"));
	TEST_ASSERT_EQUAL_INT(atoi("0"), ft_atoi("0"));
	TEST_ASSERT_EQUAL_INT(atoi("1"), ft_atoi("1"));
	TEST_ASSERT_EQUAL_INT(atoi("2"), ft_atoi("2"));
	TEST_ASSERT_EQUAL_INT(atoi("3"), ft_atoi("3"));
	TEST_ASSERT_EQUAL_INT(atoi("4"), ft_atoi("4"));
	TEST_ASSERT_EQUAL_INT(atoi("5"), ft_atoi("5"));
	TEST_ASSERT_EQUAL_INT(atoi("6"), ft_atoi("6"));
	TEST_ASSERT_EQUAL_INT(atoi("7"), ft_atoi("7"));
	TEST_ASSERT_EQUAL_INT(atoi("8"), ft_atoi("8"));
	TEST_ASSERT_EQUAL_INT(atoi("9"), ft_atoi("9"));
	TEST_ASSERT_EQUAL_INT(atoi("10"), ft_atoi("10"));
}

void test_int_max(void)
{
	TEST_ASSERT_EQUAL_INT(atoi("2147483647"), ft_atoi("2147483647"));
	TEST_ASSERT_EQUAL_INT(atoi("-2147483648"), ft_atoi("-2147483648"));
}

// not needed when using generate_test_runner.rb
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_zero);
    RUN_TEST(test_int_max);
	RUN_TEST(test_zero_to_ten);
    return UNITY_END();
}
