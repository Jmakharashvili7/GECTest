// Program17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void addTwo(int num)
{
    // Add two to the number passed
    num += 2;
    // Output the contents of num within the function
    cout << "FUNCTION: num = " << num << endl;
}

int main()
{
    //declare myNum
    int myNum = 6;

    // Output the content of myNum within main
    cout << "MAIN [before]: myNum = " << myNum << endl;

    // Call function addTwo inputing myNum
    addTwo(myNum);

    // Output the altered content of myNum within main 
    cout << "MAIN [after]: myNum = " << myNum << endl;
}
