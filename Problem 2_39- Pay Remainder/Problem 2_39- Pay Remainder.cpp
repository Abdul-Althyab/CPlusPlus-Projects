// Problem 2_39- Pay Remainder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	float totalBill, cashPaid, remainder;

	cout << "This program calculates the remainder of a bill after cash is paid." << endl;
	cout << "Enter the total bill: ";
	cin >> totalBill;
	cout << "Enter the cash paid: ";
	cin >> cashPaid;
	remainder = totalBill - cashPaid;
	cout << "The remainder of the bill is: $" << remainder << endl;
}

