#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "Enter your age: ";
	cin >> age;

	if (age >= 18 && age <= 45)
	{
		cout << "Your age is valid." << endl;
	}
	else
	{
		cout << "Your age is invalid." << endl;
	}
	return 0;
}
