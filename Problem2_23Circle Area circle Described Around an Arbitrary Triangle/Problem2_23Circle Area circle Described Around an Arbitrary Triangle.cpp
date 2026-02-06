#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double sideA, sideB, sideC, p, area;
    const float PI = 3.14159;

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

    p = (sideA + sideB + sideC) / 2.0;
    area = PI * pow((sideA * sideB * sideC) / (4 * sqrt(p * (p - sideA) * (p - sideB) * (p - sideC))), 2);

    cout << "The circle area is:  " << area;

}
