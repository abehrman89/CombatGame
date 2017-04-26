/*********************************************************************
 ** Program Filename: bluemen.cpp
 ** Author: Alexandra Behrman
 ** Date: 7/22/16
 ** Description: function definitions for Class BlueMen
 ** Input: dynamically allocated pointer
 ** Output: attack and defend functions
 *********************************************************************/

#include "bluemen.hpp"
using namespace std;

BlueMen::BlueMen()
{
    setName("Blue Men");
    setNumAtDice(2);
    setNumAtSides(10);
    setNumDefDice(3);
    setNumDefSides(6);
    setArmor(3);
    setStrength(12);
}

/*********************************************************************
 ** Function: attack()
 ** Description: calls rollAtDie function, returns hits (total of die rolls)
 ** Parameters: none
 ** Pre-Conditions: function is called
 ** Post-Conditions: hits is returned
 *********************************************************************/
int BlueMen::attack()
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
int BlueMen::defend(int hits)
{
    int protect = 0;
    
    //if strength > 8, defends with 3d6
    //if 4 < strength <= 8, defends with 2d6
    //if strength <= 4, defends with 1d6
    if (strength > 8)
    {
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
    else if (strength > 4 && strength <= 8)
    {
        numDefDice = 2;
       
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
    else
    {
        numDefDice = 1;
        
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
}