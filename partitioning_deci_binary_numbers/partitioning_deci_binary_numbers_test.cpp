#include "partitioning_deci_binary_numbers.h"
#include "../test/catch.hpp"
#include <string>
using namespace std;

/*
Example 1:
Input: n = "32"
Output: 3
Explanation: 10 + 11 + 11 = 32

Example 2:
Input: n = "82734"
Output: 8

Example 3:
Input: n = "27346209830709182346"
Output: 9
*/

TEST_CASE("test_for_32")
{
    string n = "32";
    REQUIRE(3 == partitioning_deci_binary_numbers::minPartitions(n));
}

TEST_CASE("test_for_82734")
{
    string n = "82734";
    REQUIRE(8 == partitioning_deci_binary_numbers::minPartitions(n));
}

TEST_CASE("test_for_27346209830709182346")
{
    string n = "27346209830709182346";
    REQUIRE(9 == partitioning_deci_binary_numbers::minPartitions(n));
}

// #endif
