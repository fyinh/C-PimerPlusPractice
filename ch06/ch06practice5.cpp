#include <iostream>
using namespace std;

int main()
{
	cout << "Cout the tvarps: " ;
	int tvarps;
	double tax;
	while(cin >> tvarps)
	{
		if (tvarps < 0)
		{
			cout << "Finish" << endl;
			break;
		}
		else if(tvarps <= 5000)
		{
			cout << "No need for tax." << endl;
		}
		else if(tvarps > 5000 && tvarps <= 15000)
		{
			tax = (tvarps - 5000) * 0.1;
			cout << "Tax for " << tax << " tvarps." << endl;
		}
		else if(tvarps > 15000 && tvarps <= 35000)
		{
			tax = (tvarps - 15000) * 0.15 + 10000 * 0.1;
			cout << "Tax for " << tax << " tvarps." << endl;
		}
		else
		{
			tax = (tvarps - 35000) * 0.2 + 20000 * 0.15 + 10000 * 0.1;
			cout << "Tax for " << tax << " tvarps." << endl;
		}
	 } 
	return 0;
 } 
