#include <iostream>
using namespace std;

enum enDayOfWeek { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

int main()
{
    int day;
	enDayOfWeek dayOfWeek;
	cout << "Enter a number (1-7) to represent a day of the week: ";
	cin >> day;
	dayOfWeek = (enDayOfWeek)day;


	//if (day == 1)
	//	cout << "Monday";
	//else if (day == 2)
	//	cout << "Tuesday";
	//else if (day == 3)
	//	cout << "Wednesday";
	//else if (day == 4)
	//	cout << "Thursday";
	//else if (day == 5)
	//	cout << "Friday";
	//else if (day == 6)
	//	cout << "Saturday";
	//else if (day == 7)
	//	cout << "Sunday";
	//else
	//	cout << "Invalid input. Please enter a number between 1 and 7.";
	switch (dayOfWeek)
	{
	case enDayOfWeek::Monday:
		cout << "Monday";
		break;
	case enDayOfWeek::Tuesday:
		cout << "Tuesday";
		break;
	case enDayOfWeek::Wednesday:
		cout << "Wednesday";
		break;
	case enDayOfWeek::Thursday:
		cout << "Thursday";
		break;
	case enDayOfWeek::Friday:
		cout << "Friday";
		break;
	case enDayOfWeek::Saturday:
		cout << "Saturday";
		break;
	case enDayOfWeek::Sunday:
		cout << "Sunday";
		break;
	default:
		cout << "Invalid input. Please enter a number between 1 and 7.";
		break;
	}
	return 0;
}
