#include <iostream>
using namespace std;

const double GAL_TO_SHENG = 3.875;
const double MILES = 62.14;

int main()
{
	double oil_consumption, gal;
	cout << "Enter your oil consumption: ";
	cin >> oil_consumption;
	gal = oil_consumption / GAL_TO_SHENG;
	double mpg = MILES / gal;
	cout << oil_consumption << "/100km = " << mpg << "mpg"; 
	return 0;
 } 
