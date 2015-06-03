#include "unity.h"
#include "FindTextInReverse.h"

void setUp(void)
{}

void tearDown(void)
{}

void test_No_Of_Text_Print_3_and_1(void){
	TEST_ASSERT_EQUAL(0,findTextInReverse("ABC","A"));
}	//This test make sure the counting is correct

void test_findTextInReverse_given_A_find_A_return_minus1(void){
	TEST_ASSERT_EQUAL(0,findTextInReverse("A","A"));
}

void test_findTextInReverse_given_A_find_B_return_minus1(void){
	TEST_ASSERT_EQUAL(-1,findTextInReverse("A","B"));
}

void test_findTextInReverse_given_ABCD_find_B_return_1(void){
	TEST_ASSERT_EQUAL(1,findTextInReverse("ABCD","B"));
}

void test_findTextInReverse_given_EMERALD_find_ER_return_2(void){
	TEST_ASSERT_EQUAL(2,findTextInReverse("EMERALD","ER"));
}

void test_findTextInReverse_given_EMERALD_find_EM_return_0(void){
	TEST_ASSERT_EQUAL(0,findTextInReverse("EMERALD","EM"));
}

void test_findTextInReverse_given_EMERALD_find_ERA_return_2(void){
	TEST_ASSERT_EQUAL(2,findTextInReverse("EMERALD","ERA"));
}

void test_findTextInReverse_given_EMERALD_find_ERE_return_minus1(void){
	TEST_ASSERT_EQUAL(-1,findTextInReverse("EMERALD","ERE"));
}

void test_findTextInReverse_given_I_M_EMERALD_WOLFRAM_find_LD_W_return_9(void){
	TEST_ASSERT_EQUAL(9,findTextInReverse("I M EMERALD WOLFRAM","LD W"));
}

void test_findTextInReverse_given_I_M_EMERALD_WOLFRAM_find_MX__return_minus1(void){
	TEST_ASSERT_EQUAL(-1,findTextInReverse("I M EMERALD WOLFRAM","MX"));
}

void test_findTextInReverse_given_empty_find_empty_return_minus1(void){
	TEST_ASSERT_EQUAL(-1,findTextInReverse("",""));
}

void test_findTextInReverse_given_EMERALD_find_EXE_return_minus1(void){
	TEST_ASSERT_EQUAL(-1,findTextInReverse("EMERALD","EXE"));
}

