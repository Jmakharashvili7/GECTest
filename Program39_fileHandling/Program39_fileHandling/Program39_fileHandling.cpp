// Program39_fileHandling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <array>
#include <iomanip>
using namespace std;

#define HIGHSCORELIMIT 10

struct Player
{
    string name;
    int score;
};

void UpdateHighscore(array<Player, HIGHSCORELIMIT> &leaderboards);

int main()
{
    int userInput;

    // Declare and initialize the score array
    array<Player, HIGHSCORELIMIT> leaderboards;
    for (int i = 0; i < HIGHSCORELIMIT; i++)
    {
        leaderboards[i].name = "N/A";
        leaderboards[i].score = 0;
    }

    // Check if the file exists. if it does then update the array if it doesnt exist then create
    // a new file and update it with the default blank array
    ifstream inFile("LeaderBoards.txt");
    if (inFile.is_open())
    {
        int i = 0;
        while (i < HIGHSCORELIMIT)
        {
            inFile >> leaderboards[i].name;
            inFile >> leaderboards[i].score;
            i++;
        }
        inFile.close();
    }
    else
        UpdateHighscore(leaderboards);

    Player playerScore;

    // Keep looping until the user manually exits
    while (true)
    {
        system("CLS");
        // keep looping until we get the correct input
        while (true)
        {
            cout << "1. Enter a score." << endl << "2. Display scores." << endl << "3. Exit." << endl;
            cin >> userInput;

            // Check for correct input
            if (userInput >= 1 && userInput <= 3)
                break;
            else
                cout << "Wrong input!" << endl;
        }

        switch (userInput)
        {
        case 1: // Let the user input a score
            system("CLS"); // clear screen

            // Ask for and store the score
            cout << "Please enter a score and a name!" << endl;
            cout << "Name: ";
            cin >> playerScore.name;
            cout << "Score: ";
            cin >> playerScore.score;

            // Check if the score is higher than lowest on the highscore
            if (playerScore.score > leaderboards.back().score)
            {
                leaderboards.back() = playerScore;
                UpdateHighscore(leaderboards);
            }
            else
            {
                cout << "Score is too low for leaderboards!" << endl;
            }

            break;
        case 2: 
            system("CLS"); // clear screen

            // Output the score
            for (int i = 0; i < HIGHSCORELIMIT; i++)
                cout << leaderboards[i].name << " - " << leaderboards[i].score << endl;

            // Wait for user input
            char temp;
            cout << "Press a key to continue..." << endl;
            cin >> temp;

            break;
        case 3: // Quit the application
            return 0;
        }
    }
}

void UpdateHighscore(array<Player, HIGHSCORELIMIT> &leaderBoards)
{
    Player temp; // Place holder to swap

    // Update the array
    for (int i = HIGHSCORELIMIT - 1; i > 0; i--)
    {
        // Swap values if score is higher
        if (leaderBoards[i].score > leaderBoards[i - 1].score)
        {
            temp = leaderBoards[i - 1];
            leaderBoards[i - 1] = leaderBoards[i];
            leaderBoards[i] = temp;
        }
        else 
            break;
    }

    // Update the file
    ofstream inFile("LeaderBoards.txt");
    if (inFile.is_open())
    {
        for (int i = 0; i < HIGHSCORELIMIT; i++)
            inFile << leaderBoards[i].name << " " << leaderBoards[i].score << endl;

        inFile.close();
    }
    else
        cout << "File couldn't be opened!" << endl;
}
