#include "unity.h"
#include "FindTextInReverse.h"

void setUp(void)
{}

void tearDown(void)
{}

// Development Test: check if size calculation is correct
void test_No_Of_Text_Print_3_and_1(void){
	TEST_ASSERT_EQUAL(0,findTextInReverse("ABC","A"));
}

// Positive Test 1: Check behaviour of matched character
void test_findTextInReverse_given_A_find_A_return_zero(void){
	TEST_ASSERT_EQUAL(0,findTextInReverse("A","A"));
}

// Negative Test 1: No Match character should return -1
void test_findTextInReverse_given_A_find_B_return_minus1(void){
	TEST_ASSERT_EQUAL(-1,findTextInReverse("A","B"));
}

// Positive Test 2: With Longer text. Should be able to find single character
void test_findTextInReverse_given_ABCD_find_B_return_1(void){
	TEST_ASSERT_EQUAL(1,findTextInReverse("ABCD","B"));
}

// Positive Test 3: With 2 character of Finding Word. Should return index of 
// first matching character if fully matched
void test_findTextInReverse_given_EMERALD_find_ER_return_2(void){
	TEST_ASSERT_EQUAL(2,findTextInReverse("EMERALD","ER"));
}

//Positive Test 4: To make sure longer Finding Word do work at index 0
void test_findTextInReverse_given_EMERALD_find_EM_return_0(void){
	TEST_ASSERT_EQUAL(0,findTextInReverse("EMERALD","EM"));
}

//Positive Test 5: Test with 3 Finding Character.
void test_findTextInReverse_given_EMERALD_find_ERA_return_2(void){
	TEST_ASSERT_EQUAL(2,findTextInReverse("EMERALD","ERA"));
}

// Negative Test 2: To make sure 2 out of 3 Finding Word matching will return
// -1
void test_findTextInReverse_given_EMERALD_find_ERE_return_minus1(void){
	TEST_ASSERT_EQUAL(-1,findTextInReverse("EMERALD","ERE"));
}

// Positive Test 6: To test using space and make sure space was checked
void test_findTextInReverse_given_I_M_EMERALD_WOLFRAM_find_LD_W_return_9(void){
	TEST_ASSERT_EQUAL(9,findTextInReverse("I M EMERALD WOLFRAM","LD W"));
}

// Negative Test 3: Empty Finding Text and Empty Text should return -1
void test_findTextInReverse_given_empty_find_empty_return_minus1(void){
	TEST_ASSERT_EQUAL(-1,findTextInReverse("",""));
}

