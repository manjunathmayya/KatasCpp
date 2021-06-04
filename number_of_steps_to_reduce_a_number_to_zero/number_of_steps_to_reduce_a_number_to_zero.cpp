#include "number_of_steps_to_reduce_a_number_to_zero.h"
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>


namespace number_of_steps_to_reduce_a_number_to_zero {

    int numberOfSteps(int number)
    {
        int steps = 0;
        while(number != 0)
        {
            number = number % 2 == 0 ? number/2: number-1;         
            steps++;
        }
        return steps;           
    }   
}  
