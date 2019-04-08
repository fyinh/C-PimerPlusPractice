#include <iostream>
using namespace std;

int main()
{
	double distance, oil_consumption;
	cout << "Enter your distance: ";
	cin >> distance;
	cout << "Enter your oil consumption: ";
	cin >> oil_consumption;
	double oil_per = distance / oil_consumption;
	cout << oil_per ;
	return 0;
}
