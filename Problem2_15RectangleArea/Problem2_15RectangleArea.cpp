
#include <iostream>
using namespace std;
int main()
{
    unsigned short length, width;
	float area;
	cout << "This program calculates the area of a rectangle." << endl;
	cout << "Enter the length of the rectangle:\n";
	cin >> length;
	cout << "Enter the width of the rectangle:\n";
	cin >> width;
	area = length * width;
	cout << "The area of the rectangle is " << area << endl;

}
