#include <iostream>
#include <cmath>
using namespace std;

float areaOfCircle(float circumference)
{
	const float PI = 3.14159265359f;
	return pow(circumference, 2) / (4.0 * PI);
}

int main()
{
    float area, circumference;
	
	cout << "This program calculates the area of a circle along the circumference." << endl;
	cout << "Enter the circumference of the circle:\n";
	cin >> circumference;

	area = areaOfCircle(circumference);
	cout << "The area of the circle along the circumference = " << area << endl;
	return 0;
}
