/*********************************************************************
 ** Program Filename: medusa.hpp
 ** Author: Alexandra Behrman
 ** Date: 7/22/16
 ** Description: function declarations for Class Medusa
 ** Input: none
 ** Output: class Medusa member variables and functions
 *********************************************************************/

#ifndef medusa_hpp
#define medusa_hpp

#include <iostream>
#include "creature.hpp"

class Medusa : public Creature
{
    
public:
    
    Medusa();
    virtual int attack();
    virtual int defend(int);
    
};


#endif
