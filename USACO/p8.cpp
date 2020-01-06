/*
ID: sarthak16
PROG: palsquare
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

char A[20] = {
'0',
'1',
'2',
'3',
'4',
'5',
'6',
'7',
'8',
'9',
'A',
'B',
'C',
'D',
'E',
'F',
'G',
'H',
'I',
'J'
};

string con(int, int);
bool isPal(string);

int main()
{
	freopen("palsquare.in", "r", stdin);
	freopen("palsquare.out", "w", stdout);
	
	int b;
	scanf("%d", &b);
	
	for(int i=1; i<=300; i++)
	{
		string base = con(i, b);
		string sqBase = con(i*i, b);
		if(isPal(sqBase))
			cout<<base<<" "<<sqBase<<endl;
	}
	
	return 0;
}

string con(int n, int b)
{
	string ret = "";
	while(n!=0)
	{
		ret += A[(n % b)];
		n /= b;
	}
	reverse(ret.begin(), ret.end());
	return ret;
}

bool isPal(string str)
{
	string ret = str;
	reverse(ret.begin(), ret.end());
	if(ret.compare(str)==0) return true;
	return false;
}