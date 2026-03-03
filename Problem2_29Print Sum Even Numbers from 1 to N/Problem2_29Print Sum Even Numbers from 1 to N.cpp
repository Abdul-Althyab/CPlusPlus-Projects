#include <iostream>
using namespace std;

int ReadInput()
{
	int n;
	cout << "Enter a positive integer: ";
	cin >> n;
	return n;
}
int SumEvenNumbersfrom1toN(int n)
{
    int sum = 0;
	for (int i = 0; i <= n; i += 2)
	{
		sum += i;
	}
	return sum;
}
int main()
{
	int number = ReadInput();
	cout << "The sum of even numbers from 1 to " << number << " is: " << SumEvenNumbersfrom1toN(number) << endl;
	return 0;
}
