#include <iostream>
#include <cmath>
using namespace std;

double areaOfCircle(double side, double base)
{
	const float Pi = 3.14159265359f;
	return Pi * (pow(base, 2) / 4) * ((2 * side - base) / (2 * side + base));
}
int main()
{
	    double area, side, base;
		
		cout << "This program calculates the area of a circle inscribed in an isosceles triangle." << endl;
		cout << "Enter the length of the equal sides of the isosceles triangle:\n";
		cin >> side;
		cout << "Enter the length of the base of the isosceles triangle:\n";
		cin >> base;

		area = areaOfCircle(side, base);
		cout << "The area of the circle inscribed in the isosceles triangle = " << area << endl;
		return 0;
}
