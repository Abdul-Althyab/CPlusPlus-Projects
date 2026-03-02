#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter a positive integer: ";
	cin >> n;
	cout << "Numbers from " << n << " to 1:" << endl;
	for (int i = n; i >= 1; i--)
	{
		cout << i << endl;
	}
	cout << endl;
	return 0;
}
