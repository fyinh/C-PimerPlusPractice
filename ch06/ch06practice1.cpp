#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	cout << "Enter text for analysis, and type @ to terminate input. \n";
	char ch;
	cin.get(ch);
	while (ch != '@')
	{
		if (isdigit(ch))
			cout << "";
		else if (islower(ch))
			cout << char(toupper(ch));
		else if (isupper(ch))
			cout << char(tolower(ch));
		else
			cout << char(ch);
		cin.get(ch);
	}
	return 0;
}

