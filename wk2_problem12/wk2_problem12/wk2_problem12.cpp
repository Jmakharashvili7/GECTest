// wk2_problem12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //declaring all the variables needed
    int rain = 1, snow = 2, userAnswer, temp;

    //ask and store for userAnswer (weather)
    cout << "Please tell me if its snowing with '1' or raining with '2'. " << endl;
    cin >> userAnswer;

    //ask and store temperature
    cout << "What is the temperature? (in Celcius)" << endl;
    cin >> temp;

    if (userAnswer == 1)
    {
        if (temp > 15)
            cout << "Wear a light raincoat!" << endl;
        else
            cout << "Wear a thick coat!" << endl;
    }
    else if (userAnswer == 2)
    {
        if (temp > 5)
            cout << "wear something warm!" << endl;
        else if (temp > 0)
            cout << "wrap up well!" << endl;
        else
            cout << "Stay home!" << endl;
    }
    else
        cout << "Have a nice day, it's neither raining nor snowing!" << endl;

    return 0;
}
