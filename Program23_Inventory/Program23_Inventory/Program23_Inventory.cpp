// Program23_Inventory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>

using namespace std;

// Prototypes
void OutputInventory(string inventory[], int MAX_ITEMS);

int main()
{
    const int MAX_ITEMS = 4;
    int numItems = 0;
    string userAnswer;
    string inventory[MAX_ITEMS];
    inventory[numItems++] = "Sword";
    inventory[numItems++] = "Battle axe";
    inventory[numItems++] = "Healing Potion";
    inventory[numItems++] = "Dagger";
    
    cout << "You have picked up a wizzard's staff!" << endl << "Would you like to swap it for your dagger? (Yes/No)" << endl;

    // Keep looping until correct input
    while (true)
    {
        cin >> userAnswer;

        // Convert user input to lowercase
        for (int i = 0; i < strlen(userAnswer.c_str()); i++)
            userAnswer[i] = tolower(userAnswer[i]);

        if (userAnswer == "yes")
        {
            inventory[3] = "Wizzard's staff";
            OutputInventory(inventory, MAX_ITEMS);
            break;
        }
        else if (userAnswer == "no")
        {
            cout << "You have left the staff behind!" << endl;
            OutputInventory(inventory, MAX_ITEMS);
            break;
        }
        else
            cout << "Incorrect input!" << endl;
    }
}

void OutputInventory(string inventory[], int MAX_ITEMS)
{
    cout << "Your inventory: " << endl;
    for (int i = 0; i < MAX_ITEMS; i++)
    {
        cout << inventory[i] << endl;
    }
}
