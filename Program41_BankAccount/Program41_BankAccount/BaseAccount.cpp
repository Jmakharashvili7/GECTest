#include "BaseAccount.h"

BaseAccount::BaseAccount()
{
	type = GENERAL;
	interestRate = 0.0;
}

void BaseAccount::printInfo()
{
	cout << "Account Number: " << accountNumber << endl;
	cout << "Surname: " << surname << endl; 
	cout << "Forename: " << name << endl;
	cout << "Adress: " << adress << endl;
	cout << "Balance: " << balance << endl;
	cout << "Interest rate: " << interestRate << "%" << endl;
	switch (type)
	{
	case GENERAL:
		cout << "Account Type: General" << endl;
		break;
	case SAVINGS:
		cout << "Account Type: Savings" << endl;
		break;
	case JUNIOR:
		cout << "Account type: Junior" << endl;
		break;
	}
}