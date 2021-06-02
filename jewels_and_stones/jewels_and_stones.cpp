#include "jewels_and_stones.h"
#include <iostream>
#include <algorithm>
using namespace std;

namespace jewels_and_stones {

    int numJewelsInStones(string jewels, string stones)
    {   

        int jewel_count = 0;
        for(size_t index = 0; index < jewels.length(); index ++)
        {
            for(size_t stone_index = 0; stone_index < stones.length(); stone_index ++)
            {
                if(stones[stone_index] == jewels[index])
                    jewel_count++;
            }
        }
        return jewel_count;     
    }
   
}  
