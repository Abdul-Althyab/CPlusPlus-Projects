#include <iostream>
using namespace std;

void SwapTwoNumbers(int &num1, int &num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	}
int main()
{
	int num1, num2;

	cout << "This program swaps the values of two numbers." << endl;
	cout << "Enter the first number:\n";
	cin >> num1;
	cout << "Enter the second number:\n";
	cin >> num2;

	cout << "Before swapping, num1 is " << num1 << " and num2 is " << num2 << endl;
	SwapTwoNumbers(num1, num2);
	cout << "After swapping, num1 is " << num1 << " and num2 is " << num2 << endl;
	
	
	return 0;
}

