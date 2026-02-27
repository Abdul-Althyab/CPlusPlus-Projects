#include <iostream>
using namespace std;
void readMark(int& mark)
{
	cout << "Enter the mark: ";
	cin >> mark;
}
char getGrade(const int mark)
{
	if (mark >= 90)
		return 'A';
	else if (mark >= 80)
		return 'B';
	else if (mark >= 70)
		return 'C';
	else if (mark >= 60)
		return 'D';
	else if (mark >= 50)
		return 'E';
	else
		return 'F';
}
int main()
{
	int mark;
	readMark(mark);
	cout << getGrade(mark)<<endl;
	return 0;
}

