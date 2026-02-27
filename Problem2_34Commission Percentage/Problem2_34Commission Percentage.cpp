#include <iostream>
using namespace std;

void readTotalSales(double& totalSales)
{
	cout << "Enter the total sales: ";
	cin >> totalSales;
}

double calculateCommission(const double totalSales)
{
	if (totalSales >= 1000000)
		return totalSales * 0.01;
	else if (totalSales >= 500000)
		return totalSales * 0.02;
	else if (totalSales >= 100000)
		return totalSales * 0.03;
	else if (totalSales >= 50000)
		return totalSales * 0.05;
	else
		return 0;
}

int main()
{
	double totalSales;
	readTotalSales(totalSales);
	double commission = calculateCommission(totalSales);
	cout << "The commission is: " << commission << endl;
	return 0;
    
}
