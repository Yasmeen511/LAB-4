// task 2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int i;
    int sum = 0;
    do
    {
        cout << "\nEnter an integer value (to stop, enter 0):";
        cin >> i;
        sum = sum + i;
    } while (i != 0);
    cout << "Total Sum = " << sum;

    return 0;
}

