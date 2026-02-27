#include <iostream>
using namespace std;

void readMark(double& mark)
{
	cout << "Enter your mark: ";
	cin >> mark;
}
void checkPassFail(const double mark)
{
	if (mark >= 50)
	{
		cout << "You passed!" << endl;
	}
	else
	{
		cout << "You failed." << endl;
	}
}

int main()
{
	double mark;
	//cout << "Enter your mark: ";
	//cin >> mark;

	//if (mark >= 50)
	//{
	//	cout << "You passed!" << endl;
	//}
	//else
	//{
	//	cout << "You failed." << endl;
	//}
	readMark(mark);
	checkPassFail(mark);
	return 0;
}
