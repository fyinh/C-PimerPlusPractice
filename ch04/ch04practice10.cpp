#include <iostream>
using namespace std;

int main()
{
	float score[3];
	float total = 0;
	float average = 0;
	int i;
	for (i=0; i<3; i++)
	{
		cin >> score[i];
	}
	for (i=0; i<3; i++){
		total = total + score[i];
	}
	average = total / 3;
	cout << "The number of scores: " << i << endl;
	cout << "The average score is: " << average << endl;
	return 0;
}
