#include <iostream>

using namespace std;

const int strsize = 20;


struct bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference; // 0 = fullname , 1 = title , 2 = bopname
};

void Name(bop *);
void Title(bop *);
void Bopname(bop *);
void Preference(bop *);


int main()
{
	bop members[5] = {
	{"Wimp Macho", "Wimp Macho1", "SB1", 0},
	{"Raki Rhodes", "Junior Programmer", "SB2",1},
	{"Celia Laiter", "MIPS","SB3", 2},
	{"Hoppy Hipman", "Analyst Trainee", "SB4", 0},
	{"Pat Hand", "LOOPY", "SB5",1}
	};
	
	char choice;
	cout << "Please enter one choice: " ;
	while (cin >> choice)
	{
		switch (choice)
		{
			case 'a': Name(members); break;
			case 'b': Title(members); break;
			case 'c': Bopname(members); break;
			case 'd': Preference(members); break;
			case 'q': choice = 'q'; break;
			default:
			if (choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd' && choice != 'q')
				cout << "Please enter a, b, c, d or q: " ; 	
		}
		if (choice == 'q')
		{
			cout << "Bye!" << endl;
			break;
		}
	}
	
	
	
	return 0;
}

void Name(bop * members)
{
	for (int i=0; i<5; i++)
		cout << members[i].fullname << endl;
}

void Title(bop * members)
{
	for (int i=0; i<5; i++)
		cout << members[i].title << endl;
}

void Bopname(bop * members)
{
	for (int i=0; i<5; i++)
		cout << members[i].bopname << endl;
}

void Preference(bop * members)
{
	for (int i=0; i<5; i++)
	{
		switch (members[i].preference)
		{
			case 0: cout << members[i].fullname << endl; break;
			case 1: cout << members[i].title << endl; break;
			case 2: cout << members[i].bopname << endl; break;
		}
	}
}
