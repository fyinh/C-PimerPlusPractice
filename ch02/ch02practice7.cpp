#include <iostream>
using namespace std;

//7
void showTime(int hour, int minute);

int main()
{
	int hour, minute;
	cout << "Enter the number of hours: " ;
	cin >> hour;
	cout << "Enter the number of minutes: ";
	cin >> minute;
	showTime(hour,minute);
	return 0;
}
void showTime(int hour, int minute)
{
	cout << "Time: " << hour << ":" << minute;
}
