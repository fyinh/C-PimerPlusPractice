#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

const int  SIZE = 60;

int main()
{
	char filename[SIZE];
	ifstream inFile;
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	if (!inFile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE); 
	}
	
	char value;
	int count = 0;
	
	inFile >> value;
	
	while(inFile.good())
	{
		++count;
		inFile >> value;
	}
	if (inFile.eof())
		cout << "End of file reached. \n";
	else if (inFile.fail())
		cout << "Input terminated by data mismatch. \n";
	else
		cout << "Input terminated by unknown reason. \n";
	if (count == 0)
		cout << "No data processed. \n";
	else
		cout << "Item read: " << count << endl;
	
	inFile.close();
	return 0;	
}
