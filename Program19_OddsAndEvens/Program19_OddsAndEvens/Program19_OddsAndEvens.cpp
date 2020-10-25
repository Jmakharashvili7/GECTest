// Program19_OddsAndEvens.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

// Functions Prototypes
void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);
bool even(int num);

int main()
{
    // Declare the variables
    int num, numOfOdd = 0, oddTotal = 0, numOfEven = 0, evenTotal = 0;

    for (int i = 0; i < 10; i++)
    {
        // Ask for and store a number
        cout << "Input number " << i + 1 << " : ";
        cin >> num;

        // Check if the num is even (if not its odd)
        if (even(num))
        {
            numOfEven++;
            evenTotal += num;
        }
        // If the number isnt even it has to be odd
        else
        {
            numOfOdd++;
            oddTotal += num;
        }
    }
    outputResults(numOfOdd, oddTotal, numOfEven, evenTotal);
}

// Function to determine if the inputed number is even
bool even(int num)
{
    if ((num % 2) == 0)
        return true; 
    else
        return false;
}

// Fucntion to output the results
void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
    cout << "The number of odd numbers was: " << numOfOdd << endl;
    cout << "The odd total was: " << oddTotal << endl;
    cout << "The number of even numbers was: " << numOfEven << endl;
    cout << "The even total was: " << evenTotal << endl;
}
