#include <iostream>
using namespace std;

int main()
{
	int num;
	int sum = 0;
	while (true)
	{
		cout << "Please enter the number(if the number is 0, finish.): ";
		cin >> num;
		if (num == 0) break;
		else{
			sum += num;
			cout << "The sum is: " << sum << endl;
		}
	}
	return 0;
 } 
