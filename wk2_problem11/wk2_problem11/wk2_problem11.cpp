// wk2_problem11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //variable to save the players input in
    int playerOption;

    //ask the player options
    cout << "Please choose an option: " << endl;
    cout << "1. Sunny" << endl << "2. Cloudy" << endl << "3. Raining" << endl << "4. Exit" << endl;

    //additional end lines to make output look better
    cout << endl;
    cin >> playerOption;
    cout << endl;

    //main condition to respond to the players input!
    switch (playerOption)
    {
        case 1:
            cout << "Expect a sunny morning today!" << endl;
            break;
        case 2:
            cout << "Expect a cloudy morning today!" << endl;
            break;
        case 3: 
            cout << "Expect a rainy morning today!" << endl;
            break;
        //exit
        case 4:
            return 0;
        default:
            break;
    }

    return 1;
}

