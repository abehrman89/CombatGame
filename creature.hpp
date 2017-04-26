/*********************************************************************
 ** Program Filename: creature.hpp
 ** Author: Alexandra Behrman
 ** Date: 7/22/16
 ** Description: function declarations for Class Creature
 ** Input: none
 ** Output: class Creature member variables and functions
 *********************************************************************/

#ifndef creature_hpp
#define creature_hpp

#include <iostream>
using namespace std;

class Creature
{

protected:
    
    string name;
    int numAtDice, numAtSides;
    int numDefDice, numDefSides;
    int armor;
    int strength;
    
public:
    
    Creature();
    Creature(string, int, int, int, int, int, int);
    virtual ~Creature();
    
    void setName(string);
    void setNumAtDice(int);
    void setNumAtSides(int);
    void setNumDefDice(int);
    void setNumDefSides(int);
    void setArmor(int);
    void setStrength(int);

    string getName();
    int getNumAtDice();
    int getNumAtSides();
    int getNumDefDice();
    int getNumDefSides();
    int getArmor();
    int getStrength();
    
    virtual int attack() = 0;
    virtual int defend(int) = 0;
    virtual int rollAtDie();
    virtual int rollDefDie();
};

#endif
