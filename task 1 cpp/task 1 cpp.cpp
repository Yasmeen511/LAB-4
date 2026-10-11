// task 1 cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    while (i <= 10)
    {
        if (i == 0) {
            cout << i << " Neither even Nor odd\n";
        }
        else if (i % 2 == 0) {
            cout << i << " Even\n";
        }
        else {
            cout << i << " Odd\n";
        }
        i++;
    }
    return 0;
} 

