#include <iostream>
#include <cmath>
using namespace std;

double ReadBase()
{
	double base;
	cout << "Please enter the base: ";
	cin >> base;
	cout << endl;
	return base;
}
int ReadExponent()
{
	int exponent;
	cout << "Please enter the exponent: ";
	cin >> exponent;
	cout << endl;
	return exponent;
}

double power(double base, int exponent)
{
	if (base == 0 && exponent < 0)
	{
		cout << "Error: 0 raised to a non-positive exponent is undefined." << endl;
		return NAN; // Return Not-A-Number to indicate an error
	}
	double result = 1;
	int absExponent = abs(exponent);
	for (int i = 1; i <= absExponent; ++i)
	{
		result *= base;
	}
	if (exponent < 0)
	{
		result = 1 / result;
	}
	return result;
}

int main()
{
	double base;
	int exponent;
	base = ReadBase();
	exponent = ReadExponent();
	cout << base << " raised to the power of " << exponent << " is: " << power(base, exponent) << endl;
	return 0;
}
