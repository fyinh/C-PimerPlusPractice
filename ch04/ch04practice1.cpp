#include <iostream>
using namespace std;

int main()
{
	char firstName[20];
	char lastName[20];
	char grade;
	int age;
	cout << "What is your first name? ";
	cin.getline(firstName, 20);
	cout << "What is your last name? ";
	cin.getline(lastName, 20);
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is you age? ";
	cin >> age;
	cout << "Name: " << lastName << ", " << firstName << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age: " << age << endl;  
	return 0;
}

