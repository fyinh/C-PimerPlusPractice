#include <iostream>
using namespace std;

const int Donation = 10;
int main()
{
	double donations[Donation];
	double sum = 0;
	int count = 0;
	cout << "Please enter the donation (no more than ten): " << endl;
	while (count < Donation)
	{
		if (cin >> donations[count]){
			sum += donations[count];
			count += 1;
		}
		else
			break;
	}
	double avg = sum / count;
	int bigger_count = 0;
	for (int i=0; i<=count; i++){
		if (donations[i] > avg)
			bigger_count += 1;
	}
	
	cout << "The average is : " << avg << endl;
	cout << "And there are " << bigger_count << " numbers bigger than the average" << endl;
	return 0;
 } 
