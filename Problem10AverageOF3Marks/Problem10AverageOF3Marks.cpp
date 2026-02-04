

#include <iostream>
using namespace std;
int main()
{
	int mark1, mark2, mark3;
	float average;

	cout << "This program calculates the average of three marks you enter." << endl;
	cout << "Enter the first mark:\n";
	cin >> mark1;
	cout << "Enter the second mark:\n";
	cin >> mark2;
	cout << "Enter the third mark:\n";
	cin >> mark3;
	average = (mark1 + mark2 + mark3) / 3;

	cout << "The average of " << mark1 << ", " << mark2 << ", and " << mark3 << " is " << average << endl;

	return 0;
}

