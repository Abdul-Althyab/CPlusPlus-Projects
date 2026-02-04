#include <iostream>
using namespace std;

int main()
{
    
	unsigned short days, hours, minutes, seconds;
	unsigned int totalSeconds;

	cout << "This program converts a duration given in days, hours, minutes, and seconds\n";
	cout << "into the total number of seconds." << endl;
	cout << "Enter the number of days: ";
	cin >> days;
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	cout << "Enter the number of seconds: ";
	cin >> seconds;
	
	totalSeconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;
	cout << "Total duration in seconds: " << totalSeconds << " seconds" << endl;
	return 0;
}

