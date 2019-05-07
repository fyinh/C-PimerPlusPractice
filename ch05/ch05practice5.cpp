#include <iostream>
#include <string>
using namespace std;

int main()
{
	int sales[12];
	int sum = 0;
	string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "Decemcer"};
	for (int i=0; i<12; i++){
		cout << "The sales of " << months[i] << " is: ";
		cin >> sales[i];
		sum += sales[i];
	}
	cout << "The total sales is " << sum << endl;
	return 0;
}
