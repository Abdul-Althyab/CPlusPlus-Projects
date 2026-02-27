#include <iostream>
using namespace std;

struct strDriver {
	int age;
	bool hasLicense;
};

void readInput(strDriver& driver) {
	cout << "Enter your age: ";
	cin >> driver.age;
	cout << "Do you have a driver's license? (1 for yes, 0 for no): ";
	cin >> driver.hasLicense;
}

void checkEligibility(const strDriver& driver) 
{
	if (driver.age >= 21 && driver.hasLicense) {
		cout << "Hired" << endl;
	}
	else {
		cout << "Rejected" << endl;
	}
}

int main()
{
	strDriver driver;
	//cout << "Enter your age: ";
	//cin >> age;
	//cout << "Do you have a driver's license? (1 for yes, 0 for no): ";
	//cin >> hasLicense;

	//if (age > 21 && hasLicense == true) {
	//	cout << "Hired" << endl;
	//}
	//else {
	//	cout << "Rejected" << endl;
	//}

	readInput(driver);
	checkEligibility(driver);
	return 0;
}
