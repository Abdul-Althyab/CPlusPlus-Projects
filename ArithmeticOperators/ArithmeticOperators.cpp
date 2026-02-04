// ArithmeticOperators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

	cout << "This program performs basic arithmetic operations on two integers." << endl;
	cout << "Enter first number:\n";
	cin >> num1;
	cout << "Enter second number:\n";
	cin >> num2;
	cout << endl;

	cout << num1 << " + " << num2 << "= " << num1 + num2 << endl;
	cout << num1 << " - " << num2 << "= " << num1 - num2 << endl;
	cout << num1 << " * " << num2 << "= " << num1 * num2 << endl;
	cout << num1 << " / " << num2 << "= " << num1 / num2 << endl;
	cout << num1 << " % " << num2 << "= " << num1 % num2 << endl;
	return 0;


}
