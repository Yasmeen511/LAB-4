// task  3.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int count = 0, sum = 0;
	cout << "The numbers between 100 and 200 which are divisible by 9: ";
	for (int i = 100;i <= 200;i++)
	{
		if (i % 9 == 0)
		{
			cout << i << " ";
			count++;
			sum += i;
		}
	}
	cout << "\nNumber of integers: " << count;
	cout << "\nSum of integers: " << sum;
	return 0; 
}


