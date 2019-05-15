#include <iostream>

using namespace std;

int main()
{
	cout << "Please enter one of the following choices: " << endl;
	cout << "c) carnivore		p) pianist" << endl;
	cout << "t) tree     		g) game" << endl;
	
	char choice;
	cin >> choice;
	
	while (choice != 'c' && choice != 'p' && choice != 't' && choice != 'g' ){
		cout << "Please enter a c, p, t or g: ";
		cin >> choice;
	}
	
	switch (choice){
		case 'c': cout << "carnivore" << endl; break;
		case 'p': cout << "pianist" << endl; break;
		case 't': cout << "A maple is a tree." << endl; break;
		case 'g': cout << "game" << endl; break;
	}
	return 0;
 } 
