
#include <iostream>
using namespace std;

int main()
{
	float mealCharge, serviceFee, salesTax, totalBill;
	cout << "This program calculates the total bill including service fee and sales tax." << endl;
	cout << "Enter the meal charge: ";
	cin >> mealCharge;
	serviceFee = mealCharge * 0.1; // 10% service fee
	salesTax = mealCharge * 0.16;   // 16% sales tax
	totalBill = mealCharge + serviceFee + salesTax;
	cout << "Meal Charge: $" << mealCharge << endl;
	cout << "Service Fee (10%): $" << serviceFee << endl;
	cout << "Sales Tax (16%): $" << salesTax << endl;
	cout << "Total Bill: $" << totalBill << endl;
	return 0;
}

