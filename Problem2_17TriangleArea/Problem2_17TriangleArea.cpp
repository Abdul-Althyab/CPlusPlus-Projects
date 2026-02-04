
#include <iostream>
using namespace std;
int main()
{
	float area, base, height;
	cout << "This program calculates the area of a triangle." << endl;

	cout << "Enter the base of the triangle:\n";
	cin >> base;
	cout << "Enter the height of the triangle:\n";
	cin >> height;

	area = 0.5 * base * height;

	cout << "The area of the triangle = " << area << endl;
}
