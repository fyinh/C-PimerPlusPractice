#include <iostream>
using namespace std;

//5
float calTemperature(int celsius);

int main()
{
	int celsius;
	cout << "Please enter a Celsius value: ";
	cin >> celsius;
	float degrees;
	degrees = calTemperature(celsius);
	cout << celsius << " degrees is " << degrees << " degrees Fahrenheit." << endl;
	return 0;	
}

float calTemperature(int celsius)
{
	return (1.8 * celsius + 32.0);
}
