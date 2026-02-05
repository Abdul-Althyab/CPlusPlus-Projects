#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double diagonal, side;
	cout << "This program calculates the area of a rectangle given the length of its diagonal and one side." << endl;
	cout << "Enter the length of the diagonal of the rectangle: ";
	cin >> diagonal;
	cout << "Enter the length of one side of the rectangle: ";
	cin >> side;
	// Calculate the area using the formula: Area = side * sqrt(diagonal^2 - side^2)
	double area = side * sqrt(pow(diagonal, 2) - pow(side, 2));
	cout << "The area of the rectangle is: " << area << endl;
	return 0;
}
