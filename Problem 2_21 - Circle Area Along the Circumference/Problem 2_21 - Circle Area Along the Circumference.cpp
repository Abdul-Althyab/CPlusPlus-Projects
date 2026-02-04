#include <iostream>
using namespace std;

int main()
{
    float area, circumference;
	const float PI = 3.14;
	cout << "This program calculates the area of a circle along the circumference." << endl;
	cout << "Enter the circumference of the circle:\n";
	cin >> circumference;

	area = (circumference * circumference) / (4.0 * PI);
	cout << "The area of the circle along the circumference = " << area << endl;

}
