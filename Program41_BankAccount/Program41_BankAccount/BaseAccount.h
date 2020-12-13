#pragma once

#include <iostream>
#include <string>

enum AccType { GENERAL = 0, JUNIOR, SAVINGS };

using namespace std;

class BaseAccount
{
public: // methods
	BaseAccount();
	void printInfo();
public: // variables
	AccType type;
	int accountNumber;
	string surname;
	string name;
	string adress;
	int balance;
	float interestRate;
};

