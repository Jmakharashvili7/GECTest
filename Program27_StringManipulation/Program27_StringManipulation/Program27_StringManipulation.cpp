// Program27_StringManipulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string testString = "Do you know who loves C++ XX does! ";
    string name1, name2;

    // Ask for and store first name
    cout << "Please enter a name" << endl << "Input: ";
    getline(cin, name1);
    cout << endl;

    cout << testString.insert(27, name1) << endl; // Insert first name between the X's

    cout << testString.replace(26, name1.length() + 2, name1) << endl; // Replace the X's with first name

    cout << endl; // skip a line for cleaner look

    // Ask for and store second name
    cout << "Please enter a longer name" << endl << "Input: ";
    getline(cin, name2);
    cout << endl;

    // Replace first name with second name in the test string
    cout << testString.replace(26, name1.length(), name2) << endl;
}
