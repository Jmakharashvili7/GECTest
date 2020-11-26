// Program35_TheChangingPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void InputDetails(int* n1, int* n2);
void outputDetails(int& integer1, int& integer2, int* pointer);

int main()
{
    int  n1, n2;
    int* pnum = &n1;

    InputDetails(pnum, &n2);
    outputDetails(n1, n2, pnum);

    pnum = &n2;
    cout << "\npointer changed to num2" << endl;
    outputDetails(n1, n2, pnum);

    pnum = nullptr;
}

void outputDetails(int& integer1, int& integer2, int* pointer)
{
    cout << "num1 value: " << integer1 << endl;
    cout << "num1 adress: " << &integer1 << endl;
    cout << "num2 value: " << integer2 << endl;
    cout << "num2 adress: " << &integer2 << endl;
    cout << "pnum value: " << pointer << endl;
    cout << "pnum dereferenced value: " << *pointer << endl;
    cout << "pnum adress in memory: " << &pointer << endl;
}

void InputDetails(int* n1, int* n2)
{
    cout << "Please input n1: ";
    cin >> *n1;
    cout << "Please input n2: ";
    cin >> *n2;
}