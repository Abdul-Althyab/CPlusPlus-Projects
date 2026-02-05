#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const float PI = 3.14;
	float radius, area;

	cout << "This program calculates the area of a circle." << endl;
	cout << "Enter the radius of the circle: ";
	cin >> radius;

	area = PI * pow(radius, 2);
	cout << "The area of the circle is: " << area << endl;
}
