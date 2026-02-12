#include <iostream>
#include <cmath>
using namespace std;

float calculateAreaOfCircle(float radius) {
	const float PI = 3.14159265359f;
	return PI * pow(radius, 2);
}

int main()
{
	float radius, area;

	cout << "This program calculates the area of a circle." << endl;
	cout << "Enter the radius of the circle: ";
	cin >> radius;

	area = calculateAreaOfCircle(radius);
	cout << "The area of the circle is: " << area << endl;
	return 0;
}
