/*********************************************************************
 ** Program Filename: harrypotter.cpp
 ** Author: Alexandra Behrman
 ** Date: 7/22/16
 ** Description: function definitions for Class HarryPotter
 ** Input: dynamically allocated pointer
 ** Output: attack and defend functions
 *********************************************************************/

#include "harrypotter.hpp"
using namespace std;

HarryPotter::HarryPotter()
{
    setName("Harry Potter");
    setNumAtDice(2);
    setNumAtSides(6);
    setNumDefDice(2);
    setNumDefSides(6);
    setArmor(0);
    setStrength(10);
    count = 0;
}

/*********************************************************************
 ** Function: attack()
 ** Description: calls rollAtDie function, returns hits (total of die rolls)
 ** Parameters: none
 ** Pre-Conditions: function is called
 ** Post-Conditions: hits is returned
 *********************************************************************/
int HarryPotter::attack()
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
int HarryPotter::defend(int hits)
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
    
        if (strength <= 0)
        {
            //if it's the 1st time strength <= 0, harry comes back to life
            if (count == 0)
            {
                count++;
                strength = 10;
                return strength;
            }
        }
        
        return strength;
    }
}