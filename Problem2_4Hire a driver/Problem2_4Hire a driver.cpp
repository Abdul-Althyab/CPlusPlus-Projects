#include <iostream>
using namespace std;

int main()
{
	int age;
	bool hasLicense;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Do you have a driver's license? (1 for yes, 0 for no): ";
	cin >> hasLicense;

	if (age > 21 && hasLicense == true) {
		cout << "Hired" << endl;
	}
	else {
		cout << "Rejected" << endl;
	}
	return 0;
}
