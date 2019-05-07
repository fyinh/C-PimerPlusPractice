#include <iostream>
#include <string>
using namespace std;

const int Years = 3;
const int Months = 12;
int main()
{
	int sales[Years][Months];
	int sum = 0;
	string months[Months] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "Decemcer"};
	for (int i=0; i<Years; i++){
		for (int j=0; j<Months; j++){
			cout << "The sales of " << months[j] << " is: ";
				cin >> sales[i][j];
				sum += sales[i][j];
		}
		
	}
	cout << "The total sales is " << sum << endl;
	return 0;
}
 
