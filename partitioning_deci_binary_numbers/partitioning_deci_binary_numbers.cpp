#include "partitioning_deci_binary_numbers.h"
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>


namespace partitioning_deci_binary_numbers {

    int minPartitions(string n) 
    {
        int max_digit = 0;
        for(auto &character : n)
        {
            int numerical_of_character = character - '0';
            if(numerical_of_character > max_digit)
            {
                max_digit = numerical_of_character;
            }
        }

        return max_digit;

        // char best = '0';
        // for (auto& c : n)
        //     if (c > best) best = c;
        // return best - '0';     
    }
   
}  
