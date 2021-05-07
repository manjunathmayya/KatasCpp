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
        character = tolower(character);
        auto itr = isogram_map.find(character);
        if(itr == isogram_map.end())
            return false;
        else
            return true;
    }

    void addCharacter(char character, map<char, int> isogram_map)
    {
        isogram_map[tolower(character)] = 1;
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
                if(!isSpecialCharacter(character))
                {
                    if(isDuplicate(character, isogram_map))
                    {
                        return false;
                    }
                    else
                        addCharacter(character, isogram_map);
                }
            }
        }
       
        return true;
    }
}  
