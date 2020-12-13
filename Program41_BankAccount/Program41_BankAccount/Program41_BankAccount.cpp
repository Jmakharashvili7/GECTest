// Program41_BankAccount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include "BaseAccount.h"
#include "JuniorAccount.h"
#include "SavingsAccount.h"
using namespace std;

vector<BaseAccount*> accounts;

void UpdateFile();
void WaitForInput(string text);

int main()
{
	bool menu = true;
	int userChoice = 0, userChoice2 = 0;
	int accType; // To store the type of acc
	int accNum; // To store the user input of account number
	string tempString; // To store the account number for printing using WaitForInput()

	// seed pseudo random number generator
	srand(time(NULL));

	ifstream inFile("BankAccounts.txt");
	if (inFile.is_open())
	{
		int i = 0;
		while (inFile >> accType)
		{
			switch (accType)
			{
			case GENERAL: // General
				accounts.push_back(new BaseAccount);
				inFile >> accounts[i]->accountNumber;
				inFile >> accounts[i]->surname;
				inFile >> accounts[i]->name;
				inFile >> accounts[i]->adress;
				inFile >> accounts[i]->balance;
				i++;
				break;

			case JUNIOR:
				accounts.push_back(new JuniorAccount);
				inFile >> accounts[i]->accountNumber;
				inFile >> accounts[i]->surname;
				inFile >> accounts[i]->name;
				inFile >> accounts[i]->adress;
				inFile >> accounts[i]->balance;
				i++;
				break;

			case SAVINGS:
				accounts.push_back(new SavingsAccount);
				inFile >> accounts[i]->accountNumber;
				inFile >> accounts[i]->surname;
				inFile >> accounts[i]->name;
				inFile >> accounts[i]->adress;
				inFile >> accounts[i]->balance;
				i++;
				break;
			}
		}
		inFile.close();
	}

	// The program. Keeps looping until the user manually exits.
	while (true)
	{
		// Keep looping until the correct input
		while (true)
		{
			// Clear the screen
			system("CLS");
			menu = true;

			cout << "1. Open a new account" << endl
				 << "2. View an account" << endl
				 << "3. Close an account" << endl
				 << "4. Exit program" << endl;
			cin >> userChoice;

			if (userChoice > 0 && userChoice < 5)
				break;
			else
				cout << "Wrong input!" << endl;
		}

		switch (userChoice)
		{
		case 1: // Open Acc
			while (menu)
			{
				// Clear the screen
				system("CLS");

				// Present the user with options
				cout << "1. General account" << endl
					 << "2. Junior account" << endl
					 << "3. Savings account" << endl
					 << "4. Return to main menu" << endl;
				cin >> userChoice2;

				switch (userChoice2)
				{
				case 1: // General Acc
					system("CLS");
					accounts.push_back(new BaseAccount);

					// Ask and store the users details
					cout << "Please enter your surname: ";
					cin >> accounts.back()->surname;
					cout << "Please enter your name: ";
					cin >> accounts.back()->name;
					cout << "Please enter your adress: ";
					cin >> accounts.back()->adress;

					// Ask for the money to open the account with 
					// Loop until the input is positive
					while (true)
					{
						system("CLS");

						cout << "How much money would you like to open the account with: ";
						cin >> accounts.back()->balance;

						if (accounts.back()->balance > 0)
							break;
						else
							WaitForInput("The balance can't be negative or zero!");
					}

					// Generate a random 8 degit account number and update file
					accounts.back()->accountNumber = rand() % 99999999 + 10000000;
					UpdateFile();

					// join the string with account number to output using function
					tempString = "Your account number is " + to_string(accounts.back()->accountNumber);
					WaitForInput(tempString);

					// Quit to main menu
					menu = false;
					break;

				case 2: // Junior Acc
					system("CLS");
					accounts.push_back(new JuniorAccount);

					// Ask and store the users details
					cout << "Please enter your surname: ";
					cin >> accounts.back()->surname;
					cout << "Please enter your name: ";
					cin >> accounts.back()->name;
					cout << "Please enter your adress:";
					cin >> accounts.back()->adress;

					// Ask for the money to open the account with 
					// Loop until the input is positive
					while (true)
					{
						system("CLS");

						cout << "How much money would you like to open the account with: ";
						cin >> accounts.back()->balance;

						if (accounts.back()->balance > 0)
							break;
						else
							WaitForInput("The balance can't be negative or zero!");
					}

					// Generate a random 8 degit account number and update file
					accounts.back()->accountNumber = rand() % 99999999 + 10000000;
					UpdateFile();

					// join the string with account number to output using function
					tempString = "Your account number is " + to_string(accounts.back()->accountNumber);
					WaitForInput(tempString);

					// Quit to main menu
					menu = false;
					break;

				case 3: // Savings Acc
					system("CLS");
					accounts.push_back(new SavingsAccount);

					// Ask and store the users details
					cout << "Please enter your surname: ";
					cin >> accounts.back()->surname;
					cout << "Please enter your name: ";
					cin >> accounts.back()->name;
					cout << "Please enter your adress:";
					cin >> accounts.back()->adress;

					// Ask for the money to open the account with 
					// Loop until the input is positive
					while (true)
					{
						system("CLS");

						cout << "How much money would you like to open the account with: ";
						cin >> accounts.back()->balance;

						if (accounts.back()->balance > 0)
							break;
						else
							WaitForInput("The balance can't be negative or zero!");
					}

					// Generate a random 8 degit account and update file
					accounts.back()->accountNumber = rand() % 99999999 + 10000000;
					UpdateFile();

					// join the string with account number to output using function
					tempString = "Your account number is " + to_string(accounts.back()->accountNumber);
					WaitForInput(tempString);

					// Quit to main menu
					menu = false;
					break;

				case 4: // Return to menu
					menu = false;
					break;
				}
			}
			break;

		case 2:
		{
			system("CLS");

			cout << "Please enter an account number." << endl;
			cin >> accNum;

			bool found = false;
			for (int i = 0; i < accounts.size(); i++)
			{
				if (accounts[i]->accountNumber == accNum)
				{
					system("CLS");
					accounts[i]->printInfo();
					found = true;
					break;
				}
			}

			if (found)
				WaitForInput("empty");
			else
				WaitForInput("No such account found!");
			break;
		}
		case 3:
		{
			system("CLS");

			cout << "Please enter an account number." << endl;
			cin >> accNum;

			// Check if the account exists
			bool found = false;
			for (int i = 0; i < accounts.size(); i++)
			{
				if (accounts[i]->accountNumber == accNum)
				{
					accounts.erase(accounts.begin() + i);
					found = true;
					UpdateFile();
					break;
				}
			}

			if (found)
				WaitForInput("Account closed!");
			else
				WaitForInput("No such account found!");
			break;
		}
		case 4:
			return 0;
		}
	}
}

void WaitForInput(string text)
{
	// char to hold the user input
	char c;

	if (text != "empty")
	{
		system("CLS");
		cout << text << endl;
	}

	cout << "Please input a button to continue..." << endl;
	cin >> c;
}

void UpdateFile()
{
	// Update the file
	ofstream outFile("BankAccounts.txt");
	if (outFile.is_open())
	{
		for (int i = 0; i < accounts.size(); i++)
		{
			outFile << accounts[i]->type << endl;
			outFile << accounts[i]->accountNumber << endl;
			outFile << accounts[i]->surname << endl;
			outFile << accounts[i]->name << endl;
			outFile << accounts[i]->adress << endl;
			outFile << accounts[i]->balance << endl;
		}
		outFile.close();
	}
	else
		cout << "File couldn't be opened!" << endl;
}