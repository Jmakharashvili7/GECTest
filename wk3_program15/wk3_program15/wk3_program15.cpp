// wk3_program15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
#include <cctype>

using namespace std;

int main()
{
    // Declare variables
    int lines;
    char charInput;

    while (true)
    {
        // Ask for the amount of lines to print
        do
        {
            cout << "Please input a number between 1 to 10: ";
            cin >> lines;
        } while (lines > 10 || lines < 1); // Keep asking until the console recieves the right input

        // Print the stars
        for (int i = 0; i < lines; i++)
        {
            for (int j = 0; j <= i; j++)
                cout << "*";
            cout << endl;
        }

        // Ask the user if they'd like to continue
        do
        {
            cout << "Would you like to continue?" << endl << "Y or N" << endl;
            cin >> charInput;

            charInput = toupper(charInput); // convert to uppercase incase the usuer input Y or N in lowercase
        }
        while (charInput != 'Y' && charInput != 'N'); // Keep asking until the console recieves the right input

        // If the user input N quit the fucntion
        if (charInput == 'N')
        {
            cout << "Goodbye!";
            this_thread::sleep_for(chrono::seconds(1));
            return 0;
        }
    }
}
