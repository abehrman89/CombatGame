/*********************************************************************
 ** Program Filename: gollum.cpp
 ** Author: Alexandra Behrman
 ** Date: 7/22/16
 ** Description: function definitions for Class Reptile
 ** Input: dynamically allocated pointer
 ** Output: attack and defend functions
 *********************************************************************/

#include "gollum.hpp"
using namespace std;

Gollum::Gollum()
{
    setName("Gollum");
    setNumAtDice(1);
    setNumAtSides(6);
    setNumDefDice(1);
    setNumDefSides(6);
    setArmor(3);
    setStrength(8);
}

/*********************************************************************
 ** Function: attack()
 ** Description: calls rollAtDie function, returns hits (total of die rolls)
 ** Parameters: none
 ** Pre-Conditions: function is called
 ** Post-Conditions: hits is returned
 *********************************************************************/
int Gollum::attack()
{
    int hits = 0;
    
    //5% chance gollum attacks with 3d6 instead of 1d6
    int ring = (rand() % 20 + 1);
    
    if (ring == 12)
    {
        numAtDice = 3;
        
        for (int i = 0; i < numAtDice; i++)
        {
            hits += rollAtDie();
        }
        
        return hits;
    }
    else
    {
        for (int i = 0; i < numAtDice; i++)
        {
            hits += rollAtDie();
        }
    
        return hits;
    }
}

/*********************************************************************
 ** Function: defend(int hits)
 ** Description: calls rollDefDie function, returns new strength
 ** Parameters: int hits
 ** Pre-Conditions: function is called
 ** Post-Conditions: strength is returned
 *********************************************************************/
int Gollum::defend(int hits)
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