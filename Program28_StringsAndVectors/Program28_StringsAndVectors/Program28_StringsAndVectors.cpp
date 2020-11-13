// Program28_StringsAndVectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

// Declare variables
vector<string> items = {"staff" , "axe", "healing potion", "fire spell", "sword", "knife"};
vector<string> inventory;
int inventoryMax = 3;
string magicRing = "magic ring";

// Function prototypes
void ItemExchange(string question, string item1, string item2);
void OutputInventory(vector<string> inventory);

int main()
{
    srand(time(NULL));
    int temp; // local variable
    string question = "Which item would you like to keep: X or X";

    // Fill the inventory
    while (inventory.size() < inventoryMax)
    {
        int num1 = rand() % items.size(), num2;
        
        // Keep looping until we get 2 diffrent numbers
        while (true)
        {
            num2 = rand() % items.size();
            if (num2 != num1)
                break;
        }

        ItemExchange(question, items[num1], items[num2]);
    }

    OutputInventory(inventory);

    // Keep looping until correct input
    while (true)
    {
        cout << "You have found a magic ring what would you like to replace in your inventory?" << endl << "Input: ";
        cin >> temp;

        // Check for correct input
        if (temp < 0 || temp > inventory.size())
            cout << "Wrong input! Please input a correct number!" << endl;
        else
        {
            swap(inventory[temp - 1], magicRing);
            break;
        }
    }
    OutputInventory(inventory);

    // Inform the player they have been robbed and clear inventory
    cout << "You have been robbed!" << endl;
    inventory.clear();

    OutputInventory(inventory);
}

void ItemExchange(string question, string item1, string item2)
{
    string temp; // to hold player input
    int i; // local variable

    // Replace first X with item
    for (i = 0; i < question.length(); i++)
    {
        if (question[i] == 'X') 
        {
            question.replace(i, 1, item1);
            break;
        }
    }

    // Replace second X with item
    for (i = 0; i < question.length(); i++)
    {
        if (question[i] == 'X')
        {
            question.replace(i, 1, item2);
            break;
        }
    }

    //Keep looping until correct input
    while (true)
    {
        cout << question << endl << "Input: ";
        getline(cin, temp);
        
        // convert the whole string to lowercase
        for (i = 0; i < temp.length(); i++)
            temp[i] = tolower(temp[i]);

        // Check if the input matches an item
        if (temp == item1)
        {
            items.erase(find(items.begin(), items.end(), temp)); // Remove the item from item list
            inventory.push_back(temp);
            return;
        }
        else if (temp == item2)
        {
            items.erase(find(items.begin(), items.end(), temp)); // Remove the item from item list
            inventory.push_back(temp);
            return;
        }
        else
            cout << "Wrong input! Try again." << endl;
    }

    inventory.push_back(temp);
}

void OutputInventory(vector<string> inventory)
{
    cout << endl;

    // Check if inventory is empty
    if (inventory.size() > 0)
    {
        cout << "Your inventory: " << endl;
        for (int i = 0; i < inventory.size(); i++)
            cout << i + 1 << ". " << inventory[i] << endl;
    }
    else
        cout << "Your inventory is empty!" << endl;
}
