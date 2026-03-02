#include <iostream>
using namespace std;

enum enMonths 
{ 
	January = 1, 
	February, 
	March, 
	April, 
	May, 
	June, 
	July, 
	August, 
	September, 
	October, 
	November, 
	December };

int main()
{
	int month;
	enMonths monthOfYear;
	cout << "Enter a number (1-12) to represent a month of the year: ";
	cin >> month;
	monthOfYear = (enMonths)month;

	/*if (month == 1)
		cout << "January";
	else if (month == 2)
		cout << "February";
	else if (month == 3)
		cout << "March";
	else if (month == 4)
		cout << "April";
	else if (month == 5)
		cout << "May";
	else if (month == 6)
		cout << "June";
	else if (month == 7)
		cout << "July";
	else if (month == 8)
		cout << "August";
	else if (month == 9)
		cout << "September";
	else if (month == 10)
		cout << "October";
	else if (month == 11)
		cout << "November";
	else if (month == 12)
		cout << "December";
	else
		cout << "Invalid input. Please enter a number between 1 and 12.";*/
	switch (monthOfYear)
	{
	case enMonths::January:
		cout << "January";
		break;
	case enMonths::February:
		cout << "February";
		break;
	case enMonths::March:
		cout << "March";
		break;
	case enMonths::April:
		cout << "April";
		break;
	case enMonths::May:
		cout << "May";
		break;
	case enMonths::June:
		cout << "June";
		break;
	case enMonths::July:
		cout << "July";
		break;
	case enMonths::August:
		cout << "August";
		break;
	case enMonths::September:
		cout << "September";
		break;
	case enMonths::October:
		cout << "October";
		break;
	case enMonths::November:
		cout << "November";
		break;
	case enMonths::December:
		cout << "December";
		break;
	default:
		cout << "Invalid input. Please enter a number between 1 and 12.";
		break;
	}

	return 0;
}
