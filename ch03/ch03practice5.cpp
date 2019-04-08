#include <iostream>
using namespace std;

int main()
{
	long long us,world;
	cout << "Enter the world's population: ";
	cin >> world;
	cout << "Enter the population of the US: ";
	cin >> us;
	double rate = double(us) / world * 100;
	cout << "The population of the US is " << rate << "% of the world population.";
	return 0;
}
