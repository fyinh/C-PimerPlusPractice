#include <iostream>
using namespace std;

int main()
{
	struct CandyBar{
		char branch[20];
		float weight;
		int calories;
	};
	
	CandyBar *candyBar = new CandyBar[3]{{"aaa",3,34}, {"aaa",3,34}, {"aaa",3,23}};
	for (int i=0; i<3 ;i++){
		cout << "Branch: " << candyBar[i].branch << endl;
		cout << "Weight: " << candyBar[i].weight << endl;
		cout << "Calories: " << candyBar[i].calories << endl;
		cout << "-------------------------------------" << endl ;
	}
	return 0;
}
