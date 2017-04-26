/*********************************************************************
 ** Program Filename: creature.cpp
 ** Author: Alexandra Behrman
 ** Date: 7/22/16
 ** Description: function definitions for Class Creature
 ** Input: Creature pointer
 ** Output: defined member variables for Creature pointer
 *********************************************************************/

#include "creature.hpp"
using namespace std;

Creature::Creature(){}

Creature::Creature(string theName, int theAtDice, int theAtSides, int theDefDice, int theDefSides, int theArmor, int theStrength)
{
    setName(theName);
    setNumAtDice(theAtDice);
    setNumAtSides(theAtSides);
    setNumDefDice(theDefDice);
    setNumDefSides(theDefSides);
    setArmor(theArmor);
    setStrength(theStrength);
}

Creature::~Creature(){}

void Creature::setName(string theName)
{
    name = theName;
}

void Creature::setNumAtDice(int theAtDice)
{
    numAtDice = theAtDice;
}

void Creature::setNumAtSides(int theAtSides)
{
    numAtSides = theAtSides;
}

void Creature::setNumDefDice(int theDefDice)
{
    numDefDice = theDefDice;
}

void Creature::setNumDefSides(int theDefSides)
{
    numDefSides = theDefSides;
}

void Creature::setArmor(int theArmor)
{
    armor = theArmor;
}

void Creature::setStrength(int theStrength)
{
    strength = theStrength;
}

string Creature::getName()
{
    return name;
}

int Creature::getNumAtDice()
{
    return numAtDice;
}

int Creature::getNumAtSides()
{
    return numAtSides;
}

int Creature::getNumDefDice()
{
    return numDefDice;
}

int Creature::getNumDefSides()
{
    return numDefSides;
}

int Creature::getArmor()
{
    return armor;
}

int Creature::getStrength()
{
    return strength;
}

/*********************************************************************
 ** Function: rollAtDie()
 ** Description: returns random number simulating attack die roll
 ** Parameters: none
 ** Pre-Conditions: function is called
 ** Post-Conditions: number is returned
 *********************************************************************/
int Creature::rollAtDie()
{
    return (rand() % numAtSides) + 1;
}

/*********************************************************************
 ** Function: rollDefDie()
 ** Description: returns random number simulating defense die roll
 ** Parameters: none
 ** Pre-Conditions: function is called
 ** Post-Conditions: number is returned
 *********************************************************************/
int Creature::rollDefDie()
{
    return (rand() % numDefSides) + 1;
}

