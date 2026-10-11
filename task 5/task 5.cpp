// task 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int  membership_type
	double monthly_purchase;
	int reward_points;
	cout < "Enter (1, 2 or 3) for the membership type: \n"; cout < "1. Standard In"; cout << "2. Plus In"; cout < "3. Premium In"; cin >> membership_type;
	cout < "Enter the monthly purchase for the customer: "; cin > > monthly_purchase;
	Page | 6
		switch (membership_type)
case 1:
	if (monthly_purchase < 75)
		reward_points = 0.05 * monthly_purchase;
	else if (monthly_purchase < 150)
		reward_points = 0.075 * monthly_purchase;
	else
		reward_points = 0.1 * monthly_purchase;
	cout << "Rewards points : "‹‹reward_points << endl;
break; case 2:
	if (monthly_purchase < 150)
		reward_points = 0.06 * monthly_purchase;
	else
		reward_points = 0.13 * monthly_purchase;
	cout << "Rewards points
		: '<<reward_points<<endl;
break; default:
	cout << "You entered invalid number for the membership type.";
}

