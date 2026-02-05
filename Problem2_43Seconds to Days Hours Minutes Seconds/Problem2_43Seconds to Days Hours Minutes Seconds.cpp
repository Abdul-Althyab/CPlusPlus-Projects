#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	unsigned int totalSeconds;
	unsigned int days, hours, minutes, seconds,remainingSeconds;
	cout << "This program converts a duration given in seconds into days, hours, minutes, and seconds." << endl;
	cout << "Enter the total number of seconds: ";
	cin >> totalSeconds;

	days = floor(totalSeconds / (24 * pow(60, 2)));
	remainingSeconds = totalSeconds % int(24 * pow(60, 2));
	hours = floor(remainingSeconds / pow(60, 2));
	remainingSeconds = remainingSeconds % int(pow(60, 2));
	minutes = floor(remainingSeconds / 60);
	seconds = remainingSeconds % 60;
	cout << totalSeconds << " seconds is equivalent to " << days << " days, " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds." << endl;

}
