#include <iostream>
#include <cmath>
using namespace std;

double power(double base, double exponent)
{
	return pow(base, exponent);
}

int main()
{
	double base, exponent, result;
	cout << "This program calculates the power of M\n" << endl;
	cout << "Please enter the base: ";
	cin >> base;
	cout << endl;
	cout << "Please enter the exponent: ";
	cin >> exponent;
	cout << endl;
	result = power(base, exponent);
	cout << base << " raised to the power of " << exponent << " is: " << result;
	return 0;
}
