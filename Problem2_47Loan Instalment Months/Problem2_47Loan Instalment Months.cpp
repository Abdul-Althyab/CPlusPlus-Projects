#include <iostream>
using namespace std;

int main()
{
	double loanAmount, monthlyPayment;
	unsigned short months;
	cout << "This program calculates the number of months required to pay off a loan." << endl;
	cout << "Enter the loan amount: ";
	cin >> loanAmount;
	cout << "Enter the monthly payment: ";
	cin >> monthlyPayment;
	
	months = loanAmount / monthlyPayment;
	cout << "Number of months required to pay off the loan: " << months << " month(s)" << endl;
}
