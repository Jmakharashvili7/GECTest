// Program34_CommaAndSpaces.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void comma2blank(char* textToChange);

int main()
{
	string test = "testing";

	cout << "Please input text. (be sure to replace spaces with commas)\n";
	getline(cin, test);

	char* pTest = &test[0];

	for (int i = 0; pTest[i] != '\0'; i++)
	{
		comma2blank(pTest);
	}

	for (int i = 0; pTest[i] != '\0'; i++)
		cout << pTest[i];
}

void comma2blank(char* textToChange)
{
	for (int i = 0; textToChange[i] != '\0'; i++)
	{
		if (textToChange[i] == ',')
			textToChange[i] = ' ';
	}
}
