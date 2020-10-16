// w// wk3_Problem14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	// Declare the variables
	int num1, num2, num, sum;
	int totalNumbers = 2;
	float mean;

	// Ask and store the first number
	cout << "Please input a number." << endl;
	cin >> num1;

	// Ask and store the second number
	cout << "Please input another number." << endl;
	cin >> num2;

	// Calculate and output the sum
	sum = num1 + num2;
	cout << "The sum is: " << sum << endl;

	// Calculate and output the mean
	mean = (float)sum / totalNumbers;
	cout << "The mean is: " << mean << endl;

	// Infinite loop to keep asking for another number and calculating the sum and mean
	while (true)
	{
		// Ask and store the additional number
		cout << "Please input another number or 0 to quit the function!" << endl;
		cin >> num;

		// Quit if user inputed 0
		if (num == 0)
			return 1;

		totalNumbers++; // Increment total numbers by 1

		// Calculate and output the sum
		sum += num;
		cout << "The sum is: " << sum << endl;

		// Calculate and output the mean
		mean = (float)sum / totalNumbers;
		cout << "The mean is: " << mean << endl;
	}
}