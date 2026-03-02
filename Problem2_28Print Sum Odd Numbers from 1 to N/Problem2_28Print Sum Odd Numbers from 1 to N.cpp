#include <iostream>
using namespace std;

int sumOddNumbers(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i += 2)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	int n;
	cout << "Enter an integer: ";
	cin >> n;
	cout << "The sum of odd numbers from 1 to " << n << " is: " << sumOddNumbers(n) << endl;
	return 0;
}
