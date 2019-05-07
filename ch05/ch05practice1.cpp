#include <iostream>
using namespace std;

int main()
{
	int first_num;
	int second_num;
	cout << "Please enter the first number: " ;
	cin >> first_num;
	cout << "Please enter the second number: ";
	cin >> second_num;
	int sum = 0;
	for (int i=first_num; i<=second_num; i++)
		sum += i;
	cout << "The sum is : " << sum;
	return 0; 
 } 
