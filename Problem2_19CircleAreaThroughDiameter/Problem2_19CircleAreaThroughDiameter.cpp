// Problem2_19CircleAreaThroughDiameter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	unsigned short diameter;
	const float PI = 3.14;

	float area;
	cout << "This program calculates the area of a circle." << endl;
	cout << "Enter the diameter of the circle:\n";
	cin >> diameter;

	area = PI * (diameter / 2.0) * (diameter / 2.0);
	cout << "The area of the circle = " << area << endl;
}