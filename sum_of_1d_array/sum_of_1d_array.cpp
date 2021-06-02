#include "sum_of_1d_array.h"
#include <iostream>
#include <algorithm>
using namespace std;

namespace sum_of_1d_array {

    vector<int> runningSum(vector<int>& nums) 
    {        
        vector<int> output {nums[0]};

        int array_size = nums.size();
        for(int index = 1; index < array_size ; index++)
        {
            output.push_back(output.back() + nums[index]);
        }

        return output;       
    }
   
}  
