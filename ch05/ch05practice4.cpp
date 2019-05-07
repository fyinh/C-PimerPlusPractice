#include <iostream>
using namespace std;

int main()
{
	double Daphne = 100;
	double Cleo = 100;
	int year = 0;
	while (true)
	{
		year += 1;
		Daphne += 10;
		Cleo = Cleo * 1.05;
		if (Cleo > Daphne)
		{
			cout << "After " << year << " years, Cleo catches up with Daphne." <<endl;
			cout << "At this year, Cleo has " << Cleo << " dollars" << endl;
			cout << "And Daphne has " << Daphne << " dollars" << endl; 
			break;
		 } 
	}
	return 0;
 } 
