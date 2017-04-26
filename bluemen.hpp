/*********************************************************************
 ** Program Filename: bluemen.hpp
 ** Author: Alexandra Behrman
 ** Date: 7/22/16
 ** Description: function declarations for Class BlueMen
 ** Input: none
 ** Output: class BlueMen member variables and functions
 *********************************************************************/

#ifndef bluemen_hpp
#define bluemen_hpp

#include <iostream>
#include "creature.hpp"

class BlueMen : public Creature
{
    
public:
    
    BlueMen();
    virtual int attack();
    virtual int defend(int);
    
};

#endif
