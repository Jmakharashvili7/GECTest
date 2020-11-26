// Program37_DesignatedUsername.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

void RandomUsername(string& username);

int main()
{
    string username = "Placeholder";

    // Ask for input
    cout << "Please input your username: ";
    cin >> username;

    // Inform username is taken
    cout << "Username is taken!" << endl;

    // Generate a new username and inform the user
    RandomUsername(username);
    cout << "New username: " << username;
}

void RandomUsername(string& username)
{
    // Generate a random number
    srand(time(NULL));
    int randomNums = rand();

    // Join the random number and username
    username = username + to_string(randomNums);
}
