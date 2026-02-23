#include <iostream>
using namespace std;

int main()
{
	double mark1, mark2, mark3, average;
	cout << "Enter your first mark: ";
	cin >> mark1;
	cout << "Enter your second mark: ";
	cin >> mark2;
	cout << "Enter your third mark: ";
	cin >> mark3;
	average = (mark1 + mark2 + mark3) / 3;

	cout <<"Your average is: " << average << endl;

	if (average >= 50)
	{
		cout << "You passed!" << endl;
	}
	else
	{
		cout << "You failed." << endl;
	}
	return 0;
}