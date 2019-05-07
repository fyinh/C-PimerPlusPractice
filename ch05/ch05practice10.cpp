#include <iostream>
using namespace std;

int main()
{
	int rows;
	cout << "Enter number of rows: ";
	cin >> rows;
	int point_count = rows-1;
	int star_count = 1; 
	for (int i=0; i<rows; i++){
		for (int j=0; j<point_count; j++)
			cout << ".";
		for (int k=0; k<star_count; k++)
			cout << "*";
		cout <<endl;
		point_count -= 1;
		star_count += 1;
	}
	return 0;
}
