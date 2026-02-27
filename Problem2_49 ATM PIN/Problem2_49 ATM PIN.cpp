#include <iostream>
using namespace std;

void readPIN(int& pin)
{
	cout << "Enter your 4-digit PIN: ";
	cin >> pin;
}
bool validatePIN(const int pin)
{
	return pin == 1234;
}
int main()
{
	int pin;
	double balance = 7500;
	//cout << "Enter your 4-digit PIN: ";
	//cin >> pin;
	readPIN(pin);

	if (validatePIN(pin))
	{
		cout << "Your Balance is: $"<< balance << endl;
	}
	else
	{
		cout << "Invalid PIN. Access denied." << endl;
	}
    return 0;
}
