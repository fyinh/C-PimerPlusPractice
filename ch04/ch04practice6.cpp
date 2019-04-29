#include <iostream>
using namespace std;

int main()
{
	struct CandyBar{
		char branch[20];
		float weight;
		int calories;
	};
	
	CandyBar candyBar[3] = {{"Mocha Munch", 2.3, 350}, {"Mocha Munch", 4.5, 200}, {"Mocha Munch", 5, 800}};
	for (int i=0; i<3 ;i++){
		cout << "Branch: " << candyBar[i].branch << endl;
		cout << "Weight: " << candyBar[i].weight << endl;
		cout << "Calories: " << candyBar[i].calories << endl;
		cout << "-------------------------------------" << endl ;
	}
	return 0;
}
