#include <iostream>
using namespace std;

void out1();
void out2();

int main(){
	out1();
	out1();
	out2();
	out2();
	return 0;
}

void out1()
{
	cout << "There blind mice" << endl;
}

void out2()
{
	cout << "See how they run" << endl;
}
