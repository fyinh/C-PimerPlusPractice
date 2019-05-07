#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count = 0;
	string str;
	cout << "Enter words(to stop, type the word done): " << endl;
	while (true)
	{
		cin >> str;
		if (str == "done") break;
		count += 1;
	}
	cout << "You entered a total of " << count << " words." << endl;
	return 0;
	
	return 0;
}
