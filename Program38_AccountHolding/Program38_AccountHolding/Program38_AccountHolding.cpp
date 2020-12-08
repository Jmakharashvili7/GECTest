// Program38_AccountHolding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

	#include <iostream>
	#include <fstream>
	#include <string>
	using namespace std;

	struct Account
	{
		string name;
		int accountNumber;
		double balance;
	};

	int main()
	{
		Account user1, user2;
		bool accountFound;
		int choice;
		char answer = 'y';

		ofstream outFile;
		ifstream inFile;

		while (true)
		{
			cout << "What would you like to do?" << endl
				<< "1. Input an account." << endl
				<< "2. Print all accounts." << endl
				<< "3. Print accounts with a balance over 10,000." << endl
				<< "4. Exit." << endl;

			cin >> choice;
			cout << endl;

			if (choice > 0 && choice < 5)
			{
				switch (choice)
				{
				case 1:
					outFile.open("Account.txt", ios::app | ios::out);

					while (true)
					{
						if (outFile.is_open())
						{
							cout << "Please enter your name: ";
							cin >> user1.name;
							outFile << user1.name << endl;

							cout << "Please enter your account number: ";
							cin >> user1.accountNumber;
							outFile << user1.accountNumber << endl;

							cout << "Please enter your balance: ";
							cin >> user1.balance;
							outFile << user1.balance << endl;

							cout << "Would you like to enter more details? (y/n)" << endl;
							cin >> answer;

							cout << endl;

							if (answer == 'n')
								break;
						}
					}

					outFile.close();
					break;
				case 2:
					inFile.open("Account.txt");

					if (inFile.is_open())
					{
						while (inFile >> user2.name)
						{
							cout << "Name: " << user2.name << endl;
							inFile >> user2.accountNumber;
							cout << "Account Number: " << user2.accountNumber << endl;
							inFile >> user2.balance;
							cout << "Balance: " << user2.balance << endl;
							cout << endl;
						}
					}

					inFile.close();
					break;
				case 3:
					accountFound = false;
					inFile.open("Account.txt");

					if (inFile.is_open())
					{
						while (inFile >> user2.name)
						{
							inFile >> user2.accountNumber;
							inFile >> user2.balance;
							if (user2.balance > 10000)
							{
								cout << "Name: " << user2.name << endl;
								cout << "Account Number: " << user2.accountNumber << endl;
								cout << "Balance: " << user2.balance << endl;
								cout << endl;
								accountFound = true;
							}
						}
						if (!accountFound)
							cout << "No account with a balance of over 10,000 found!" << endl;
					}

					inFile.close();
					break;
				case 4:
					return 0;
				}
			}
			else
				cout << "Invalid input! Please input a number from 1 to 4!" << endl;
		}
	}
