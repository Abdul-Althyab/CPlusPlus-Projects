#include <iostream>
using namespace std;

int ReadInput()
{
	int n;
	cout << "Enter a positive integer: ";
	cin >> n;
	return n;
}
unsigned long long Factorial(int n)
{
	unsigned long long factorial = 1;
	for (int i = 1; i <= n; ++i)
	{
		factorial *= i;
	}
	return factorial;
}

int main()
{
	int n = ReadInput();
	while (n < 0)
	{
		cout << "Error: Factorial is not defined for negative numbers." << endl;
		cout << "Enter a positive integer: ";
		cin >> n;
	}
	cout << "The factorial of " << n << " is: " << Factorial(n) << endl;
	return 0;
}
