#include <iostream>
using namespace std;

const int change = 12;

int main()
{
	int in;
	cout << "Please enter your height of in:_ ";
	cin >> in;
	int ft = in / change;
	in = in % change;
	cout << "Your height is " << ft << " ft and " << in << " in" << endl; 
	return 0;
}
