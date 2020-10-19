// wk3_Program16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    int playerLife = 100;
    int damage;

    // Loop to keep asking the question
    for (int i = 1; i < 11; i++)
    {
        // Ask for and store the damage 
        cout << "Question " << i << ": How much damage shall I deal?" << endl;
        cin >> damage;

        // subtract damage from the health total
        playerLife -= damage; 

        // If the players health is 0 or below ouput message and quit!
        if (playerLife <= 0)
        {
            cout << "Early End. Player Died!" << endl;
            return 1;
        }

        // Output player life
        cout << "Player has: " << playerLife << " left!" << endl;
    }

    // Output message and quit 
    cout << "All questions asked. Player survived!" << endl;
    return 0;
}