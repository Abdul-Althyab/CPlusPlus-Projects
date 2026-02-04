// Problem2_20Circle Area Inscribed in a Square.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	float area, side;
	const float PI = 3.14;
	cout << "This program calculates the area of a circle inscribed in a square." << endl;
	cout << "Enter the length of the side of the square:\n";
	cin >> side;
	area = PI * (side / 2.0) * (side / 2.0);
	cout << "The area of the circle inscribed in the square = " << area << endl;
}
