

#include <iostream>
using namespace std;
int main()
{
	int num1, num2, temp;

	cout << "This program swaps the values of two numbers." << endl;
	cout << "Enter the first number:\n";
	cin >> num1;
	cout << "Enter the second number:\n";
	cin >> num2;

	cout << "Before swapping, num1 is " << num1 << " and num2 is " << num2 << endl;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "After swapping, num1 is " << num1 << " and num2 is " << num2 << endl;
	return 0;
}

