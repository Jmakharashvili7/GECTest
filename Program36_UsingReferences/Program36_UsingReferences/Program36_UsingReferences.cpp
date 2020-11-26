// Program36_UsingReferences.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void Plus25(int& num);
void Minus25(int& num);

int main()
{
    int num;
    int& rNum = num;

    cout << "Please input number: ";
    cin >> num;
    cout << "num: " << num << endl;

    Plus25(rNum);

    cout << "changed num: " << num << endl;

    cout << "Please input another number: ";
    cin >> num;
    cout << "num: " << num << endl;

    Minus25(rNum);
    
    cout << "changed num: " << num << endl;
}

void Plus25(int& num)
{
    num += 25;
}

void Minus25(int& num)
{
    num -= 25;
}