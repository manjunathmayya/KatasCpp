#include "sum_of_1d_array.h"
#include "../test/catch.hpp"
#include <vector>
using namespace std;

/*
Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].


Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
*/

TEST_CASE("array_size_1")
{
    vector<int> nums{1};
    vector<int> output {1};
    REQUIRE(output == sum_of_1d_array::runningSum(nums));
}

TEST_CASE("array_size_2")
{
    vector<int> nums{1,2};
    vector<int> output {1,3};
    REQUIRE(output == sum_of_1d_array::runningSum(nums));
}

TEST_CASE("array_size_3")
{
    vector<int> nums{1,2,3};
    vector<int> output {1,3,6};
    REQUIRE(output == sum_of_1d_array::runningSum(nums));
}

TEST_CASE("test_example_1")
{
    vector<int> nums{1,2,3,4};
    vector<int> output {1,3,6,10};
    REQUIRE(output == sum_of_1d_array::runningSum(nums));
}

TEST_CASE("test_example_2")
{
    vector<int> nums{1,1,1,1,1};
    vector<int> output {1,2,3,4,5};
    REQUIRE(output == sum_of_1d_array::runningSum(nums));
}



// #endif
