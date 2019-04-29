#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char firstName[20];
	char lastName[20];
	string sFirstName;
	string sLastName;
	cout << "char-----------------------------------" << endl;
	cout << "Enter your first name: " ;
	cin.getline(firstName,20);
	cout << "Enter your last name: ";
	cin.getline(lastName, 20);
	cout << "Here's the information in a single string: " << lastName << ", " << firstName << endl;
	cout << "string---------------------------------" << endl;
	cout << "Enter your first name: " ;
	getline(cin, sFirstName);
	cout << "Enter your last name: ";
	getline(cin, sLastName);
	cout << "Here's the information in a single string: " << sLastName << ", " << sFirstName << endl;
	return 0;
}
