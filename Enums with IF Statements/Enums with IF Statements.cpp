#include <iostream>
using namespace std;

enum enScreenColor
{
	Red = 1,
	Green = 2,
	Blue = 3,
	Yellow = 4
};

int main()
{
	cout << "*************************************" << endl;
	cout << "Please select a screen color: " << endl;
	cout << "1. Red" << endl;
	cout << "2. Green" << endl;
	cout << "3. Blue" << endl;
	cout << "4. Yellow" << endl;
	cout << "*************************************" << endl;

	cout << "Enter your choice: " <<endl;
	int userInput;
	cin >> userInput;
	enScreenColor color;
	color = (enScreenColor)userInput;

	//if (color == enScreenColor::Red)
	//	system("color 4F");
	//else if (color == enScreenColor::Green)
	//	system("color 2F");
	//else if (color == enScreenColor::Blue)
	//	system("color 1F");
	//else if (color == enScreenColor::Yellow)
	//	system("color 6F");
	//else
	//	system("color 0F");
	switch (color)
	{
	case enScreenColor::Red:
		system("color 4F");
		break;
	case enScreenColor::Green:
		system("color 2F");
		break;
	case enScreenColor::Blue:
		system("color 1F");
		break;
	case enScreenColor::Yellow:
		system("color 6F");
		break;
	default:
		system("color 0F");
		break;
	}

	return 0;
}
