#include <iostream>
using namespace std;

void readAge(int& age)
{
	cout << "Enter your age: ";
	cin >> age;
}

bool validateAge(const int age)
{
	return age >= 18 && age <= 45;
}

int main()
{
	int age;
	//cout << "Enter your age: ";
	//cin >> age;
	readAge(age);
	validateAge(age);

	if (validateAge(age))
	{
		cout << "Your age is valid." << endl;
	}
	else
	{
		cout << "Your age is invalid." << endl;
	}
	return 0;
}
