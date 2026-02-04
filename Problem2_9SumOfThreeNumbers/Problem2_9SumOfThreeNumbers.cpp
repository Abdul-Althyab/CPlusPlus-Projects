
#include <iostream>
using namespace std;
int main()
{
	int number1, number2, number3, sum;

	cout << "This program calculates the sum of three numbers you enter." << endl;
	cout << "Enter the first number:\n";
	cin >> number1;
	cout << "Enter the second number:\n";
	cin >> number2;
	cout << "Enter the third number:\n";
	cin >> number3;
	sum = number1 + number2 + number3;
	cout << "The sum of " << number1 << ", " << number2 << ", and " << number3 << " is " << sum << endl;
}
