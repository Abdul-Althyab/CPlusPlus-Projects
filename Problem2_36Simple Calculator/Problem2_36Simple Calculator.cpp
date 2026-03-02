#include <iostream>
using namespace std;

int main()
{
	int number1, number2;
	char operation;
	cout << "Enter first integer: ";
	cin >> number1;
	cout << "Enter second integer: ";
	cin >> number2;
	cout << "Enter an operator (+, -, *, /): ";
	cin >> operation;

	if (operation == '+')
		cout << number1 << " + " << number2 << " = " << number1 + number2;
	else if (operation == '-')
		cout << number1 << " - " << number2 << " = " << number1 - number2;
	else if (operation == '*')
		cout << number1 << " * " << number2 << " = " << number1 * number2;
	else if (operation == '/')
	{
		if (number2 != 0)
			cout << number1 << " / " << number2 << " = " << (double)number1 / number2;
		else
			cout << "Error: Division by zero is not allowed.";
	}
	else
		cout << "Error: Invalid operator.";

}
