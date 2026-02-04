
#include <iostream>
using namespace std;
int main()
{
	    float area, side, base;
		const float Pi = 3.14;

		cout << "This program calculates the area of a circle inscribed in an isosceles triangle." << endl;
		cout << "Enter the length of the equal sides of the isosceles triangle:\n";
		cin >> side;
		cout << "Enter the length of the base of the isosceles triangle:\n";
		cin >> base;

		area = Pi * ((base * base) / 4) * ((2 * side - base) / (2 * side + base));

		cout << "The area of the circle inscribed in the isosceles triangle = " << area << endl;

}
