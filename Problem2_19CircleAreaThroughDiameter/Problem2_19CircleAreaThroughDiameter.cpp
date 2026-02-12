#include <iostream>
#include <cmath>
using namespace std;

float calculateAreaOfCircle(float diameter) {
	const float PI = 3.14159265359f;
	
	return PI * pow((diameter / 2.0), 2);
}
int main()
{
	unsigned short diameter;
	float area;

	cout << "This program calculates the area of a circle." << endl;
	cout << "Enter the diameter of the circle:\n";
	cin >> diameter;

	area = calculateAreaOfCircle(diameter);
	cout << "The area of the circle = " << area << endl;
	return 0;
}