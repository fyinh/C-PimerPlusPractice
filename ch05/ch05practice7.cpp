#include <iostream>
#include <string>
using namespace std;

struct Car
{
	string make;
	int year;
};

int main()
{
	int cars_amount;
	cout << "How many cars do you wish to catalog? " << endl;
	cin >> cars_amount;
	Car * cars = new Car[cars_amount];
	for (int i=0; i<cars_amount; i++){
		cout << "Car #" << i+1 << ":" <<endl;
		cin.get();
		cout << "Please enter the make: ";
		getline(cin, cars[i].make);
		cout << "Please enter the year make: ";
		cin >> cars[i].year;
	}
	cout << "Here is your collection: " <<endl;
	for (int i=0; i<cars_amount; i++){
		cout << cars[i].year << " " << cars[i].make <<endl;
	}		
	return 0;
}
