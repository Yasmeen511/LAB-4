// task 3.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int value;
    cout << "Enter an integer:";
    cin >> value;
    for (int i = 1;i <= 10;i++)
    {
        cout << value << " * " << i << " = " << value * i << endl;
    }
    return 0;
} 


