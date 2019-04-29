#include <iostream>
using namespace std;

int main()
{
	struct CandyBar{
		char branch[20];
		float weight;
		int calories;
	};
	
	CandyBar snack = {"Mocha Munch", 2.3, 350};
	cout << "Branch: " << snack.branch << endl;
	cout << "Weight: " << snack.weight << endl;
	cout << "Calories: " << snack.calories << endl;
	return 0;
}
