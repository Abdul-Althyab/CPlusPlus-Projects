#include <iostream>
#include <cmath>
using namespace std;

double areaOfCircle(double sideA, double sideB, double sideC)
{
    const float PI = 3.14159265359f;
	double p = (sideA + sideB + sideC) / 2.0;
	return PI * pow((sideA * sideB * sideC) / (4 * sqrt(p * (p - sideA) * (p - sideB) * (p - sideC))), 2);
}

int main()
{
    double sideA, sideB, sideC, area;
    

    cout << "This program calculates Circle Area that circle Described Around an Arbitrary Triangle\n" << endl;
    cout << "Please enter the first side of the triangle: ";
    cin >> sideA;
    cout << endl;
    cout << "Please enter the second side of the triangle: ";
    cin >> sideB;
    cout << endl;
    cout << "Please enter the third side of the triangle: ";
    cin >> sideC;
    cout << endl;

	area = areaOfCircle(sideA, sideB, sideC);
    cout << "The circle area is:  " << area;
	return 0;
}
