#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter a positive integer: ";
	cin >> n;
	cout << "Numbers from 1 to " << n << ":" << endl;
	for (int i = 1; i <= n; i++)
	{
		cout << i << endl;
	}
	cout << endl;
	return 0;
}
