#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

const int  SIZE = 60;

struct Patrons{
	char name[SIZE];
	double money;
};

int main()
{
	char filename[SIZE];
	ifstream inFile;
	
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	
	if (!inFile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE); 
	}
	char str[30];
    inFile.getline(str, 1);
	int num;
	
	inFile >> num;
	
	Patrons* patrons = new Patrons[num];
	
	int larger = 0;
	
	for (int i=0; i<num; i++)
	{
		cout << "Please enter the name and money: ";
		inFile.getline(patrons[i].name, SIZE);
		inFile >> patrons[i].money;
		inFile.getline(str, 1);
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
