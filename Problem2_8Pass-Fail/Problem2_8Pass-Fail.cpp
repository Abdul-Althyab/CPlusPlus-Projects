#include <iostream>
using namespace std;

int main()
{
	double mark;
	cout << "Enter your mark: ";
	cin >> mark;

	if (mark >= 50)
	{
		cout << "You passed!" << endl;
	}
	else
	{
		cout << "You failed." << endl;
	}
	return 0;
}
