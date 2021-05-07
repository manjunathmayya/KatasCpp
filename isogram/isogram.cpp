#include "isogram.h"
#include <iostream>
#include <map>

namespace isogram {

    bool isSpecialCharacter(char character)
    {
        return character == '-' || character == ' ';
    }

    bool isDuplicate(char character, map<char, int> isogram_map)
    {
        auto itr = isogram_map.find(character);
        if(itr == isogram_map.end())
            return false;
        else
            return true;
    }

    void addCharacter(char character, map<char, int> * isogram_map)
    {
        (*isogram_map)[character] = 1;
    }

    bool is_isogram(string str)
    {

        if (str == "")
            return true;

        else
        {
            map<char, int> isogram_map;

            for (auto character : str)
            {
                character = tolower(character);

                if(!isSpecialCharacter(character))
                {
                    if(isDuplicate(character, isogram_map))
                    {
                        return false;
                    }
                    else
                    {
                        addCharacter(character, &isogram_map);
                    }
                }
            }
        }
       
        return true;
    }
}  
