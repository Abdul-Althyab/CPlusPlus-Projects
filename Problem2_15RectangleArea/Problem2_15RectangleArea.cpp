#include <iostream>
using namespace std;

float CalculateArea(unsigned short length, unsigned short width)
{
		return (float)length * (float)width;
}

int main()
{
    unsigned short length, width;
	
	cout << "This program calculates the area of a rectangle." << endl;
	cout << "Enter the length of the rectangle:\n";
	cin >> length;
	cout << "Enter the width of the rectangle:\n";
	cin >> width;
	
	cout << "The area of the rectangle is " << CalculateArea(length, width) << endl;
	return 0;
	}
