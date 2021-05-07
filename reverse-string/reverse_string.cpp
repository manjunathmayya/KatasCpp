#include "reverse_string.h"

namespace reverse_string {

    string reverse_string(string input)
    {       
        return string(input.rbegin(), input.rend());
    }

}  
