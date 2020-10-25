// Program18_SmallestNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Function to return smallest number
int smallestNumber(int a, int b);

int main()
{
    // Declare the variables
    int num1, num2;

    // Ask for and store the first number
    cout << "Please input the 1st number: ";
    cin >> num1;

    // Ask for and store the second number
    cout << "Please input the 2nd number: ";
    cin >> num2;

    // Output the smallest number
    cout << "The smallest number is: " << smallestNumber(num1, num2);
}

int smallestNumber(int a, int b)
{
    // Find and return smallest number
    if (a < b)
        return a;
    else
        return b;
}