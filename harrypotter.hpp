/*********************************************************************
 ** Program Filename: harrypotter.hpp
 ** Author: Alexandra Behrman
 ** Date: 7/22/16
 ** Description: function declarations for Class HarryPotter
 ** Input: none
 ** Output: class HarryPotter member variables and functions
 *********************************************************************/

#ifndef harrypotter_hpp
#define harrypotter_hpp

#include <iostream>
#include "creature.hpp"

class HarryPotter : public Creature
{
    
protected:
    int count;

public:
    
    HarryPotter();
    virtual int attack();
    virtual int defend(int);
    
};

#endif
