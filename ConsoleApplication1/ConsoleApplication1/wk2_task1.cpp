// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    bool a = true;
    int num1 = 12, num2 = 5, num3 = 7;

    if (a)
    {
        num1++;
        num2 += 5;
    }
    num3 *= 2;

    cout << "num 1 = " << num1 << endl;
    cout << "num 2 = " << num2 << endl;
    cout << "num 3 = " << num3 << endl;

}