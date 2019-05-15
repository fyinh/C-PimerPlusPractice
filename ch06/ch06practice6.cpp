#include <iostream>
#include <string>
using namespace std;


struct Patrons{
	string name;
	double money;
};

int main(){
	int num;
	cout << "Please enter the number of patrons: ";
	cin >> num;
	Patrons* patrons = new Patrons[num];
	
	int larger = 0;
	
	for (int i=0; i<num; i++)
	{
		cout << "Please enter the name and money: ";
		cin >> patrons[i].name;
		cin >> patrons[i].money;
		if (patrons[i].money > 1000)
			larger += 1;
	}
	
	cout << "--------------------------------" << endl;
	
	if (larger == 0){
		cout << "Grand Patrons" << endl;
		cout << "none" << endl;
		cout << "Patrons" << endl;
		for (int i=0; i<num; i++){
			cout << patrons[i].name << "\t" << patrons[i].money << endl;
		}
	}
	
	else if (larger == num){
		cout << "Grand Patrons" << endl;
		for (int i=0; i<num; i++){
			cout << patrons[i].name << "\t" << patrons[i].money << endl;
		}
		cout << "Patrons" << endl;
		cout << "none" << endl;
	}
	
	else{
		cout << "Grand Patrons" << endl;
		for (int i=0; i<num; i++){
			if (patrons[i].money > 10000)
				cout << patrons[i].name << "\t" << patrons[i].money << endl;
		}
		cout << "Patrons" << endl;
		for (int i=0; i<num; i++){
			if (patrons[i].money <= 10000)
				cout << patrons[i].name << "\t" << patrons[i].money << endl;
		}
	} 
	return 0;
}
