#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string sFirstName;
	string sLastName;
	cout << "string---------------------------------" << endl;
	cout << "Enter your first name: " ;
	getline(cin, sFirstName);
	cout << "Enter your last name: ";
	getline(cin, sLastName);
	cout << "Here's the information in a single string: " << sLastName << ", " << sFirstName << endl;
	return 0;
}
