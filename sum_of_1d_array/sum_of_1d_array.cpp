#include "sum_of_1d_array.h"
#include <iostream>
#include <algorithm>
using namespace std;

namespace sum_of_1d_array {

    vector<int> runningSum(vector<int>& nums) 
    {    

        /*
          -> input  : [1,2,3]
          -> output : [3+2+1,2+1, 1]
          -> reverse          
        */
        vector<int> output;

        for(int outer_index = nums.size()-1; outer_index >= 0; outer_index--)
        {
            int sum = 0;
            for(int index = outer_index; index >= 0; index--)
            {
                sum += nums[index];
            }
            output.push_back(sum);
        }

        reverse(output.begin(), output.end());
        return output;       
    }
   
}  
