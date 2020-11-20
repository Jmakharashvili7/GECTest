// Program33_Structs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct UserDetails
{
    string name;
    int age;
    string phoneNumber;
    void PrintDetails();
};

int main()
{
    UserDetails userDetails;

    cout << "Please enter your name: ";
    getline(cin, userDetails.name);
    
    cout << "\nPlease enter your phone number: ";
    getline(cin, userDetails.phoneNumber);

    cout << "\nPlease enter your age: ";
    cin >> userDetails.age;

    userDetails.PrintDetails();
}

void UserDetails::PrintDetails()
{
    cout << "\nName: " << name << endl;
    cout << "\nAge: " << age << endl;
    cout << "\nPhone number: " << phoneNumber << endl;
}
