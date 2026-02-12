#include <iostream>
#include <cmath>
using namespace std;

float areaOfCircle(float side)
{
	const float PI = 3.14159265359f;
	return PI * pow((side / 2.0), 2);
}

int main()
{
	float area, side;
	
	cout << "This program calculates the area of a circle inscribed in a square." << endl;
	cout << "Enter the length of the side of the square:\n";
	cin >> side;
	area = areaOfCircle(side);
	cout << "The area of the circle inscribed in the square = " << area << endl;
	return 0;
}
