#include <iostream>
using namespace std;

void readMarks(double marks[3]) {
	cout << "Enter your first mark: ";
	cin >> marks[0];
	cout << "Enter your second mark: ";
	cin >> marks[1];
	cout << "Enter your third mark: ";
	cin >> marks[2];
}
double calculateAverage(double marks[3]) {
	return (marks[0] + marks[1] + marks[2]) / 3;
}
void checkPassFail(const double average) {
	cout << "Your average is: " << average << endl;
	if (average >= 50)
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
	double marks[3], average;
	/*double mark1, mark2, mark3, average;*/
	//cout << "Enter your first mark: ";
	//cin >> mark1;
	//cout << "Enter your second mark: ";
	//cin >> mark2;
	//cout << "Enter your third mark: ";
	//cin >> mark3;
	//average = (mark1 + mark2 + mark3) / 3;

	//cout <<"Your average is: " << average << endl;

	//if (average >= 50)
	//{
	//	cout << "You passed!" << endl;
	//}
	//else
	//{
	//	cout << "You failed." << endl;
	//}
	readMarks(marks);
	average = calculateAverage(marks);
	checkPassFail(average);
	return 0;
}