#include <iostream>
using namespace std;

int main()
{
	int pin;
	double balance = 7500;
	cout << "Enter your 4-digit PIN: ";
	cin >> pin;

	if (pin == 1234)
	{
		cout << "Your Balance is: $"<< balance << endl;
	}
	else
	{
		cout << "Invalid PIN. Access denied." << endl;
	}
    return 0;
}
