#include <iostream>
using namespace std;

//6
double calLightYear(double lightYear);

int main()
{
	double lightYear;
	cout << "Enter the number of light years: ";
	cin >> lightYear;
	double units = calLightYear(lightYear);
	cout << lightYear << " light years = " << units << " astronomical units" << endl;
	return 0;
}

double calLightYear(double lightYear)
{
	return (63240 * lightYear);
}
