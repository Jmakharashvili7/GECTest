// wk2_problem13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	char userStatus;
	int userChoice;

	cout << "Please tell me your status with 's' for student, 't' for teacher or 'o' for other." << endl;
	cin >> userStatus;

	cout << "Which game would you like, 1 or 2?" << endl;
	cin >> userChoice;

	if ((userStatus == 's' || userStatus == 't') && (userChoice == 1))
		cout << "You get a 20% discount!" << endl;
	else if ((userStatus == 's' || userStatus == 't') && (userChoice == 2))
		cout << "You get a 10% discount!" << endl;
	else
		cout << "You don't get a discount!" << endl;

	return 0;
}
