/*********************************************************************
 ** Program Filename: reptile.hpp
 ** Author: Alexandra Behrman
 ** Date: 7/22/16
 ** Description: function declarations for Class ReptilePeople
 ** Input: none
 ** Output: class ReptilePeople member variables and functions
 *********************************************************************/

#ifndef reptile_hpp
#define reptile_hpp

#include <iostream>
#include "creature.hpp"

class ReptilePeople : public Creature
{
    
public:
    
    ReptilePeople();
    virtual int attack();
    virtual int defend(int);
    
};

#endif
