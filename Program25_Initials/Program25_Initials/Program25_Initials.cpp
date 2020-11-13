// Program25_Initials.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    char name[50];
    int i, temp;

    cout << "Please input your name." << endl << "(Name initial, then middle name inital, then full surname)" << endl << "Input: ";
    cin.getline(name, 50);

    // We know first character is name initial
    cout << name[0] << endl;

    for (i = 0; name[i] != '\0'; i++)
    {
        // Check for space
        if (name[i] == ' ')
        {
            // since i = space, i + 1 will be the letter after space, we keep looping until the next space.
            for (int j = i + 1; name[j] != ' '; j++)
            {
                if (name[j] == '\0') // Quit if we reach end of the string
                    return 0;
                cout << name[j];
            }
            cout << endl; 
        }
    }
}
    