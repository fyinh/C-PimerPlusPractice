#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int count = 0;
	char *str = new char[20];
	cout << "Enter words(to stop, type the word done): " << endl;
	while (true)
	{
		cin >> str;
		if (strcmp(str, "done") == 0) break;
		count += 1;
	}
	cout << "You entered a total of " << count << " words." << endl;
	return 0;
}
