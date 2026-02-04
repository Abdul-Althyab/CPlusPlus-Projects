#include <iostream>
using namespace std;

int main()
{
	double loanAmount, monthlyPayment;
	unsigned short months;

	cout << "This program calculates the number of months required to pay off a loan." << endl;
	cout << "Enter the loan amount: ";
	cin >> loanAmount;
	cout << "Enter the numbers of months: ";
	cin >> months;

	monthlyPayment = loanAmount / months;
	cout << "Monthly payment: $" << monthlyPayment << endl;
}
