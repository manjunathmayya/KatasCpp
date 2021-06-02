#include "jewels_and_stones.h"
#include "../test/catch.hpp"
#include <string>
using namespace std;

/*
Example 1:
Input: jewels = "aA", stones = "aAAbbbb"
Output: 3

Example 2:
Input: jewels = "z", stones = "ZZ"
Output: 0
*/

TEST_CASE("jewels_and_stone_test_one_jewel")
{
    REQUIRE(1 == jewels_and_stones::numJewelsInStones("a", "a"));
}

TEST_CASE("jewels_and_stone_test_example_1")
{
    REQUIRE(3 == jewels_and_stones::numJewelsInStones("aA", "aAAbbbb"));
}

TEST_CASE("jewels_and_stone_test_example_2")
{
    REQUIRE(0 == jewels_and_stones::numJewelsInStones("z", "ZZ"));
}

// #endif
