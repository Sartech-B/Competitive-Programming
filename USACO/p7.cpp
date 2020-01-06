/*
ID: sarthak16
PROG: namenum
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

char a[10][3] = {
{'0', '0', '0'},
{'1', '1', '1'},
{'A', 'B', 'C'},
{'D', 'E', 'F'},
{'G', 'H', 'I'},
{'J', 'K', 'L'},
{'M', 'N', 'O'},
{'P', 'R', 'S'},
{'T', 'U', 'V'},
{'W', 'X', 'Y'},
};

int validName(string, string);

int main()
{
	ifstream fin ("namenum.in");
	ifstream tin ("dict.txt");
	freopen("namenum.out", "w", stdout);
	
	string num;
	
	fin>>num;
	
	int atl = 0;
	
	for(int i=0; i<4617; i++)
	{
		string name;
		tin>>name;
		
		if(validName(num, name))
		{
			cout<<name<<endl;
			atl = 1;
		}
	}
	
	if(!atl) cout<<"NONE"<<endl;
	
	
	return 0;
}

int validName(string num, string name)
{
	if(num.length()!=name.length()) return 0;
	
	for(int i=0; i<num.length(); i++)
	{
		int index = (int)(num[i]-'0');
		if(a[index][0]!=name[i] && a[index][1]!=name[i] && a[index][2]!=name[i]) return 0;
	}
	return 1;
}