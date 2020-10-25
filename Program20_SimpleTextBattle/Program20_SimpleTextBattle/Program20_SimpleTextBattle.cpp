// Program20_SimpleTextBattle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
#include <thread>         // this_thread::sleep_for
#include <chrono>         // chrono::seconds

using namespace std;

// Declare global variables
int playerHealth = 1000, trollHealth = 2000;
bool playing = true;

// Function prototypes
void attackChoice(int playerChoice);
bool playstateFunction();

int main()
{
    // Variable to hold players choise
    int playersChoice;

    // Inform the player they encountered a troll
    cout << "You have encountered a troll! You have three options of attack. Choose wisely as they have diffrent effects." << endl;

    // Loop until player stops playing
    while (playing)
    {
        // infinite loop until player input is correct
        while (true)
        {
            // List the player options and store it
            cout << "1. Use sword." << endl << "2. Use magic." << endl << "3. Use Axe." << endl << "Your choice: ";
            cin >> playersChoice;

            // Check if the input is correct
            if (playersChoice == 1 || playersChoice == 2 || playersChoice == 3)
                break;
            else
                cout << "Wrong input!" << endl;
        }
        
        // Call the functions
        attackChoice(playersChoice);
        playstateFunction();
    }

    // Inform the player the game is quitting and wait a 2 seconds before closing the application
    cout << "You have quit the game!" << endl;
    this_thread::sleep_for(chrono::seconds(2));

    return 0;
}

void attackChoice(int playerChoice)
{
    const int player_sword = 300, player_magic = 650, player_axe = 450, // Declare player attacks
        troll_sword = 350, troll_magic = 50, troll_axe = 100; // Declare troll attacks

    switch (playerChoice)
    {
        case 1:
        {
            // Calculate the sword damage
            trollHealth -= player_sword;
            playerHealth -= troll_sword;

            // Inform the player of the hits
            cout << "You have hit the troll with your sword!" << endl;
            cout << "The troll has also struck back with its sword!" << endl;
            
            // If the health of player or enemy is less than 0 set it to 0
            if (playerHealth < 0)
                playerHealth = 0;
            if (trollHealth < 0)
                trollHealth = 0;

            // Output players and enemys health
            cout << "The player has: " << playerHealth << " health remaining!" << endl;
            cout << "The troll has: " << trollHealth << " health remaining!" << endl;
            break;
        }

        case 2:
        {
            //Calculate the magic damage 
            trollHealth -= player_magic;
            playerHealth -= troll_magic;
            
            // Inform the player of the hits
            cout << "You have hit the troll with magic!" << endl;
            cout << "The troll has also struck back with magic!" << endl;

            // If the health of player or enemy is less than 0 set it to 0
            if (playerHealth < 0)
                playerHealth = 0;
            if (trollHealth < 0)
                trollHealth = 0;

            // Output hte players and enemys health
            cout << "The player has: " << playerHealth << " health remaining!" << endl;
            cout << "The troll has: " << trollHealth << " health remaining!" << endl;
            break;
        }

        case 3:
        {
            //Calculate the axe damage 
            trollHealth -= player_axe;
            playerHealth -= troll_axe;

            // Inform the player of the hits
            cout << "You have hit the troll with magic!" << endl;
            cout << "The troll has also struck back with magic!" << endl;

            // If the health of player or enemy is less than 0 set it to 0
            if (playerHealth < 0)
                playerHealth = 0;
            if (trollHealth < 0)
                trollHealth = 0;

            // Output hte players and enemys health
            cout << "The player has: " << playerHealth << " health remaining!" << endl;
            cout << "The troll has: " << trollHealth << " health remaining!" << endl;
            break;
        }
    }
}

bool playstateFunction()
{
    // Declare variable
    char playAgain;

    // Check if the troll died
    if (trollHealth <= 0)
    {
        // Inform the player troll is defeated
        cout << "Congratulations! You have defeated the troll!" << endl;

        // Infinite loop until player input is correct
        while (true)
        {
            // Ask the player if they'd like to play again
            cout << "Woudl you like to play again? (y/n)" << endl << "Player input: ";
            cin >> playAgain;

            playAgain = tolower(playAgain); // Convert to lower incase player use upper case letter

            // If the player wants to play again reset the game
            if (playAgain == 'y')
            {
                playerHealth = 1000;
                trollHealth = 2000;
                playing = true;
                break;
            }
            // If the player doesnt want to play again set playing to false
            else if (playAgain == 'n')
            {
                playing = false;
                break;
            }
            else
                cout << "Wrong input!" << endl;
        }
    }

    //Check if the player died
    if (playerHealth <= 0)
    {
        // Inform the player they have died 
        cout << "You have died!" << endl << "Game over!" << endl;

        // Infinite loop until player input is correct
        while (true)
        {
            // Check if the player would like to play again
            cout << "Would you like to play again? (y/n)" << endl << "User input: ";
            cin >> playAgain;

            playAgain = tolower(playAgain); // Convert to lower incase player use upper case letter

            // Restart the game
            if (playAgain == 'y')
            {
                playerHealth = 1000;
                trollHealth = 2000;
                playing = true;
                break;
            }
            // Quit the game
            else if (playAgain == 'n')
            {
                playing = false;
                break;
            }
            // Wrong input ask again
            else
                cout << "Wrong input!" << endl;
        }
    }
    return false;
}



