#include <iostream>
using namespace std;

int main()
{
	unsigned int totalSeconds;
	unsigned short days, hours, minutes, seconds, remainingSeconds;
	cout << "This program converts a duration given in seconds into days, hours, minutes, and seconds." << endl;
	cout << "Enter the total number of seconds: ";
	cin >> totalSeconds;

	days = floor(totalSeconds / (24 * 60 * 60));
	remainingSeconds = totalSeconds % (24 * 60 * 60);
	hours = floor(remainingSeconds / (60 * 60));
	remainingSeconds = remainingSeconds % (60 * 60);
	minutes = floor(remainingSeconds / 60);
	seconds = remainingSeconds % 60;
	cout << totalSeconds << " seconds is equivalent to " << days << " days, " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds." << endl;

}
