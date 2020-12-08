// Program40_PetCare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Pet.h"
#include <iostream>
using namespace std;

int main()
{
    Pet* pet;
    int choice;

    cout << "Which pet would you like?\n" << "1 - Cat\n" << "2 - Dog\n" << "3 - Hamster\n" << endl;
    cin >> choice;
    cout << endl;

    switch (choice)
    {
    case 1:
        pet = new Cat(5, 5);
        break;
    case 2:
        pet = new Dog(2, 2);
        break;
    case 3:
        pet = new Hamster(10, 10);
        break;
    default:
        pet = new Pet(0, 0);
        break;
    }

    while(true)
    {
        cout << "What would you like to do?\n"
            << "0 - Quit\n"
            << "1 - Listen to your pet\n"
            << "2 - Feed your pet\n"
            << "3 - Play with your pet\n" << endl;
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 0:
            return 0;
        case 1:
            pet->Talk();
            break;
        case 2:
            pet->Feed();
            break;
        case 3:
            pet->Play();
            break;
        }
    }
}