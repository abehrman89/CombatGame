/*********************************************************************
 ** Program Filename:
 ** Author: Alexandra Behrman
 ** Date: 7/22/16
 ** Description: main function for fight simulation
 ** Input: user input to select types of fighters
 ** Output: fight result
 *********************************************************************/

#include <iostream>
#include "creature.hpp"
#include "reptile.hpp"
#include "medusa.hpp"
#include "gollum.hpp"
#include "bluemen.hpp"
#include "harrypotter.hpp"
#include <time.h>
using namespace std;

int main()
{

    srand (time(NULL));
    
    int choice1;
    int choice2;
    
    Creature *fighter1;
    Creature *fighter2;
    
    //user decides first fighter
    cout << "Select your first fighter! There are 5 options:" << endl;
    cout << "1. Medusa\n";
    cout << "2. Gollum\n";
    cout << "3. Reptile People\n";
    cout << "4. Blue Men\n";
    cout << "5. Harry Potter\n";
    cout << "Please enter a number 1-5. If you enter any other number, the program will quit.\n";
    cin >> choice1;
    cout << endl;
    
    if(choice1 == 1)
    {
        fighter1 = new Medusa();
    }
    else if(choice1 == 2)
    {
        fighter1 = new Gollum();
    }
    else if(choice1 == 3)
    {
        fighter1 = new ReptilePeople();
    }
    else if(choice1 == 4)
    {
        fighter1 = new BlueMen();
    }
    else if(choice1 == 5)
    {
        fighter1 = new HarryPotter();
    }
    else
    {
        return 0;
    }
    
    //user decides second fighter
    cout << "Select your second fighter! There are 5 options:" << endl;
    cout << "1. Medusa\n";
    cout << "2. Gollum\n";
    cout << "3. Reptile People\n";
    cout << "4. Blue Men\n";
    cout << "5. Harry Potter\n";
    cout << "Please enter a number 1-5. If you enter any other number, the program will quit.\n";
    cin >> choice2;
    cout << endl;
    
    if(choice2 == 1)
    {
        fighter2 = new Medusa();
    }
    else if(choice2 == 2)
    {
        fighter2 = new Gollum();
    }
    else if(choice2 == 3)
    {
        fighter2 = new ReptilePeople();
    }
    else if(choice2 == 4)
    {
        fighter2 = new BlueMen();
    }
    else if(choice2 == 5)
    {
        fighter2 = new HarryPotter();
    }
    else
    {
        return 0;
    }
    
    bool gameOver = false;
    
    //continue looping until gameOver = true
    while(!gameOver)
    {
    
        //fighter1 attacks
        int f1Hits = fighter1->attack();
        
        //only applicable for Medusa
        if (f1Hits == 1000000)
        {
            cout << "Medusa turned Fighter 2 to stone!" << endl;
            cout << "Fighter 1, " << fighter1->getName() << ", wins!" << endl;
            cout << endl;
            
            gameOver = true;
            
            delete fighter1;
            delete fighter2;
            
            return 0;
        }
        
        //fighter2 defends
        int f2Strength = fighter2->defend(f1Hits);
        
        cout << "Fighter 2: " << fighter2->getName() << "'s strength is: " << fighter2->getStrength() << endl;
        cout << endl;
        
        //if fighter1 wins
        if (f2Strength <= 0)
        {
            cout << "Fighter 1, " << fighter1->getName() << ", wins!" << endl;
            cout << endl;
            
            gameOver = true;
            
            delete fighter1;
            delete fighter2;
            
            return 0;
        }
        
        //fighter2 attacks
        int f2Hits = fighter2->attack();
        
        //only applicable for Medusa
        if (f2Hits == 1000000)
        {
            cout << "Medusa turned Fighter 1 to stone!" << endl;
            cout << "Fighter 2, " << fighter2->getName() << ", wins!" << endl;
            cout << endl;
            
            gameOver = true;
            
            delete fighter1;
            delete fighter2;
            
            return 0;
        }
        
        //fighter1 defends
        int f1Strength = fighter1->defend(f2Hits);
        
        cout << "Fighter 1: " << fighter1->getName() << "'s strength is: " << fighter1->getStrength() << endl;
        cout << endl;
        
        //if fighter2 wins
        if (f1Strength <= 0)
        {
            cout << "Fighter 2, " << fighter2->getName() << ", wins!" << endl;
            cout << endl;
            
            gameOver = true;
            
            delete fighter1;
            delete fighter2;
            
            return 0;
        }
        
    }

}
