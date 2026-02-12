#include <iostream>
#include <cmath>
using namespace std;

int calculateTotalSeconds(unsigned short days, unsigned short hours, unsigned short minutes, unsigned short seconds)
{
	return (days * 24 * pow(60, 2)) + (hours * pow(60, 2)) + (minutes * 60) + seconds;
}

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
	
	totalSeconds = calculateTotalSeconds(days, hours, minutes, seconds);
	cout << "Total duration in seconds: " << totalSeconds << " seconds" << endl;
	return 0;
}

