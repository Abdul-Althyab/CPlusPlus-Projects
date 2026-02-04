
#include <iostream>
using namespace std;
int main()
{
	int pennies, nickels, dimes, quarters, dollars;
	
	cout << "This program calculates the total amount of money in your piggy bank." << endl;
	cout << "Enter the number of pennies:\n";
	cin >> pennies;
	cout << "Enter the number of nickels:\n";
	cin >> nickels;
	cout << "Enter the number of dimes:\n";
	cin >> dimes;
	cout << "Enter the number of quarters:\n";
	cin >> quarters;
	cout << "Enter the number of dollars:\n";
	cin >> dollars;

	float totalDollars = pennies * 0.01 + nickels * 0.05 + dimes * 0.10 + quarters * 0.25 + dollars * 1.00;
	float totalPennies = totalDollars * 100;

	cout << "The total amount of money in your piggy bank is $" << totalDollars << endl;
	cout << "The total amount of pennies in your piggy bank is " << totalPennies <<" pennies." << endl;
	return 0;
}
