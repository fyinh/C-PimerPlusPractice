#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	int vowels_num = 0;
	int consonants_num = 0;
	int others_num = 0;
	string word;
	cout << "Enter words(q to quit): " << endl;
	while (cin >> word){
		if (word == "q"){
			break;
		}
		else if (isalpha(word[0])){
			if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u')
				vowels_num ++;
			else
				consonants_num ++; 
		}
		else
			others_num ++;
	}
	cout << vowels_num << " words beginning with vowels." << endl;
	cout << consonants_num << " words beginning with consonants." << endl;
	cout << others_num << " others" << endl;
	return 0;
}
