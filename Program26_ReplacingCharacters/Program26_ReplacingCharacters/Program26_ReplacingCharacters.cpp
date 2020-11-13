// Program26_ReplacingCharacters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence;

    // Read and store input
    cout << "Please input a sentence: ";
    getline(cin, sentence);

    // Print out initial sentence
    cout << sentence << endl;

    // Look for every occurance of e and replace it with X
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == 'e')
            sentence.replace(i, 1, "X");
    }

    // Print out altered result
    cout << sentence << endl;
}
