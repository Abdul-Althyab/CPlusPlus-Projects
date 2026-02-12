 #include <iostream>
#include <cmath>
using namespace std;

double calculateAreaOfRectangle(double diagonal, double side) {
	return side * sqrt(pow(diagonal, 2) - pow(side, 2));
}

int main()
{
	double diagonal, side, area;
	cout << "This program calculates the area of a rectangle given the length of its diagonal and one side." << endl;
	cout << "Enter the length of the diagonal of the rectangle: ";
	cin >> diagonal;
	cout << "Enter the length of one side of the rectangle: ";
	cin >> side;
	area = calculateAreaOfRectangle(diagonal, side);
	cout << "The area of the rectangle is: " << area << endl;
	return 0;
}
