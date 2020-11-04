// Program22_OrderedOutput.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iterator>

using namespace std;

// Prototype
void SwitchValues(int& number1, int& number2);
void LargestNumber(int numbers[], int arraySize, int& largestNumPos, int& largestNum);

int main()
{
    int numbers[5];
    int largestNumPos, LargestNum;

    // Get input and fill the array
    for (int i = 0; i < size(numbers); i++)
    {
        cout << "Please input number " << i+1 << ": ";
        cin >> numbers[i];
    }

    // Order the array in ascending order
    for (int i = 0; i < size(numbers); i++)
    {
        for (int j = (i + 1); j < size(numbers); j++)
            if (numbers[i] > numbers[j])
                SwitchValues(numbers[i], numbers[j]);
    }

    // Output array
    cout << endl << "The ordered array: " << endl;
    for (int i = 0; i < size(numbers); i++)
        cout << "Number " << i+1 << " is " << numbers[i] << endl;

    // Output in descending order
    cout << endl << "The array backwards is: " << endl;
    for (int i = 0; i < size(numbers); i++)
        cout << "Number " << size(numbers) - i << " is " << numbers[(size(numbers) - i) - 1] << endl;

    LargestNumber(numbers, size(numbers), largestNumPos, LargestNum); // Sets the largest number and its position

    // Output the largest value and its position
    cout << endl << "The largest number is " << LargestNum << " and its position is " << largestNumPos << "." << endl;
}

void SwitchValues(int& number1, int& number2)
{
    int temp = number1;
    number1 = number2;
    number2 = temp;
}

void LargestNumber(int numbers[], int arraySize, int& largestNumPos, int& largestNum)
{
    // Start with first number as largest
    largestNum = numbers[0];
    largestNumPos = 1;

    // Find the largest number in the array
    for (int i = 1; i < arraySize; i++)
    {
        if (numbers[i] > largestNum)
        {
            largestNum = numbers[i];
            largestNumPos = (i + 1);
        }
    }
}
