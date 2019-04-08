#include <iostream>
using namespace std;

const int IN_TO_FT = 12;
const double IN_TO_METER = 0.0254;
const double POUND_TO_KG = 2.2;

int main()
{
	double height1, height2, weight;
	cout << "Please enter your height (fist ft then in) : ";
	cin >> height1;
	cin >> height2;
	cout << "Please enter your wight (pounds): ";
	cin >> weight;
	double height = (height1 * IN_TO_FT + height2) * IN_TO_METER;
	double weight1 = weight / POUND_TO_KG;
	double BMI = (weight1 / height) * (weight1 / height);
	cout << "Your BMI is " << BMI << endl; 
	return 0;
} 
