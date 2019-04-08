#include <iostream>
using namespace std;

const int D_TO_H = 24;
const int H_TO_M = 60;
const int M_TO_S = 60;

int main()
{
	long seconds_raw, seconds, minutes, hours, days;
	cout << "Enter the number of seconds: ";
	cin >> seconds_raw;
	minutes = seconds_raw / M_TO_S;
	seconds = seconds_raw % M_TO_S;
	hours = minutes / H_TO_M;
	minutes = minutes % H_TO_M;
	days = hours / D_TO_H;
	hours = hours % D_TO_H;
	cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
	return 0;
 } 
