// task 3.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    int odd;
    cout << "Enter the number of terms:";
    cin >> n;
    cout << "The odd numbers are:";
    for (int i = 1;i <= n;i++)
    {
        odd = 2 * i - 1;
        cout << odd << " ";
        sum = sum + odd;
    }
    cout << "\nThe Sum of odd Natural Numbers up to " << n << " terms:" << sum;
    return 0;
}


