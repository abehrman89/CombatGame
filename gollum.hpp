/*********************************************************************
 ** Program Filename: gollum.hpp
 ** Author: Alexandra Behrman
 ** Date: 7/22/16
 ** Description: function declarations for Class Gollum
 ** Input: none
 ** Output: class Gollum member variables and functions
 *********************************************************************/

#ifndef gollum_hpp
#define gollum_hpp

#include <iostream>
#include "creature.hpp"

class Gollum : public Creature
{
    
public:
    
    Gollum();
    virtual int attack();
    virtual int defend(int);
    
};

#endif
