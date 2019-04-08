#include <iostream>
using namespace std;

const int DEGREES_TO_MINUTES = 60;
const int MINUTES_TO_SECONDS = 60;

int main()
{
	double degrees, minutes, seconds;
	cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
	cout <<	"First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;
	double minutes1 = minutes + seconds / MINUTES_TO_SECONDS;
	double degrees1 = degrees + minutes1 / DEGREES_TO_MINUTES;
	cout <<  degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << degrees1 << " degrees";
	return 0;
 } 
 
