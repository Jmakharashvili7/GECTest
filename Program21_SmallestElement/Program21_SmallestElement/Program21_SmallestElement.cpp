// Program21_SmallestElement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iterator>

using namespace std;

int main()
{
    int numbers[10];
    int smallestNum, smallestNumPos;

    // Fill the array with user input
    for (int i = 0; i < size(numbers); i++)
    {
        cout << "Please input a number: ";
        cin >> numbers[i];
    }

    // Set first number as the smallest number
    smallestNum = numbers[0];
    smallestNumPos = 1;

    // Find the smallest number in the array (start from 1 since 0 is already smallestNum) 
    for (int i = 1; i < size(numbers); i++)
    {
        if (smallestNum > numbers[i])
        {
            smallestNum = numbers[i];
            smallestNumPos = (i + 1);
        }
    }

    // Output the smallest number and its position
    cout << "The smallest number is : " << smallestNum  << endl;
    cout << "The position of the number is: " << smallestNumPos;
}

