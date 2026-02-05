#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number;
	cout << "This program calculates the square, cube, and fourth power of a number you enter." << endl;
	cout << "Enter a number:\n";
	cin >> number;
	cout << endl;
	cout << "The square of " << number << " is " << pow(number, 2) << endl;
	cout << "The cube of " << number << " is " << pow(number, 3) << endl;
	cout << "The fourth power of " << number << " is " << pow(number, 4) << endl;
	return 0;
}

