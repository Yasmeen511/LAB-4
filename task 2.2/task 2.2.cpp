// task 2.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	char choice;
	int countofa = 0, countofb = 0, countofc = 0;
	do
	{
		cout << "Enter a character(to exit, enter x):";
		cin >> choice;
		switch (choice)
		{
		case 'a':
			countofa++;
			break;
		case 'b':
			countofb++;
			break;
		case 'c':
			countofc++;
			break;
		}
	} while (choice != 'x');
	cout << "\nNumber of a's: " << countofa;
	cout << "\nNumber of b's: " << countofb;
	cout << "\nNumber of c's: " << countofc;
}

