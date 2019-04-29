#include <iostream>
using namespace std;

int main()
{
	struct Pizza{
		char companyName[30];
		float diameter;
		float weight;
	};
	
	Pizza* pizza = new Pizza;
	
	cout << "Enter the company of the pizza: " ;
	cin.getline(pizza->companyName,30);
	cout << "Enter the diameter of the pizza: ";
	cin >> pizza->diameter;
	cout << "Enter the weight of the pizza: ";
	cin >> pizza->weight;
	
	cout << "company name: " << pizza->companyName << endl;
	cout << "Diameter: " << pizza->diameter << endl;
	cout << "Weight: " << pizza->weight <<endl;
	
	return 0;
}
