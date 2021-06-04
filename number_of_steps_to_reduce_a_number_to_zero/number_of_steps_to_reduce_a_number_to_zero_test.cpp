#include "number_of_steps_to_reduce_a_number_to_zero.h"
#include "../test/catch.hpp"
#include <string>
using namespace std;

/*
Input: num = 8
Output: 4
Explanation: 
Step 1) 8 is even; divide by 2 and obtain 4. 
Step 2) 4 is even; divide by 2 and obtain 2. 
Step 3) 2 is even; divide by 2 and obtain 1. 
Step 4) 1 is odd; subtract 1 and obtain 0.

*/

TEST_CASE("test_for_8")
{
    REQUIRE(4 == number_of_steps_to_reduce_a_number_to_zero::numberOfSteps(8));
}

TEST_CASE("test_for_14")
{
    REQUIRE(6 == number_of_steps_to_reduce_a_number_to_zero::numberOfSteps(14));
}

TEST_CASE("test_for_123")
{
    REQUIRE(12 == number_of_steps_to_reduce_a_number_to_zero::numberOfSteps(123));
}

// #endif
