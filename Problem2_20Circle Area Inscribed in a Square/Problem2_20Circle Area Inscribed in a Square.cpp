#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float area, side;
	const float PI = 3.14;
	cout << "This program calculates the area of a circle inscribed in a square." << endl;
	cout << "Enter the length of the side of the square:\n";
	cin >> side;
	area = PI * pow((side / 2.0), 2);
	cout << "The area of the circle inscribed in the square = " << area << endl;
}
