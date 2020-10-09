// wk2_tk3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    char play_again;
    cout << "Do you wish to play again?" << endl << "y or n" << endl;
    cin >> play_again;

    switch (play_again)
    {
        case 'y':
            cout << "you choose to play again!";
            break;
        case 'n':
            cout << "goodbye!";
            break;
        default:
            cout << "Please only enter y or n!";
            break;
    }
}
