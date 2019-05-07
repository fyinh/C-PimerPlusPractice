#include <iostream>
#include <array>
using namespace std;

const int ArSize = 101;
int main()
{
	array <long double, ArSize> factorials;
	factorials[1] = factorials[0] = 1;
	for (int i=2; i<ArSize; i++)
		factorials[i] = i * factorials[i-1];
	cout << "100! = " << factorials[101];
	return 0;
}
