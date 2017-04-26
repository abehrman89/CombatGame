/*********************************************************************
 ** Program Filename: reptile.cpp
 ** Author: Alexandra Behrman
 ** Date: 7/22/16
 ** Description: function definitions for Class Reptile
 ** Input: dynamically allocated pointer
 ** Output: attack and defend functions
 *********************************************************************/

#include "reptile.hpp"
using namespace std;

ReptilePeople::ReptilePeople()
{
    setName("Reptile People");
    setNumAtDice(3);
    setNumAtSides(6);
    setNumDefDice(1);
    setNumDefSides(6);
    setArmor(7);
    setStrength(18);
}

/*********************************************************************
 ** Function: attack()
 ** Description: calls rollAtDie function, returns hits (total of die rolls)
 ** Parameters: none
 ** Pre-Conditions: function is called
 ** Post-Conditions: hits is returned
 *********************************************************************/
int ReptilePeople::attack()
{
    int hits = 0;
    
    for (int i = 0; i < numAtDice; i++)
    {
        hits += rollAtDie();
    }
    
    return hits;
}

/*********************************************************************
 ** Function: defend(int hits)
 ** Description: calls rollDefDie function, returns new strength
 ** Parameters: int hits
 ** Pre-Conditions: function is called
 ** Post-Conditions: strength is returned
 *********************************************************************/
int ReptilePeople::defend(int hits)
{
    int protect = 0;
    
    for (int i = 0; i < numDefDice; i++)
    {
        protect += rollDefDie();
    }
    
    int damage = (hits - protect) - armor;
    
    if (damage <= 0)
    {
        return strength;
    }
    else
    {
        strength -= damage;
        return strength;
    }
}