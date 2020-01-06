/*
ID: sarthak16
PROG: dualpal
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

bool isDualPal(int);
string con(int, int);
bool isPal(string);

int main()
{
	freopen("dualpal.in", "r", stdin);
	freopen("dualpal.out", "w", stdout);
	
	int n, s;
	scanf("%d %d", &n, &s);
	
	int i = s + 1;
	int num = 0;
	
	while(true)
	{
		if(isDualPal(i))
		{
			printf("%d\n", i);
			num++;
			if(num==n) break;
		}
		
		i++;
	}
	
	return 0;
}

bool isDualPal(int n)
{
	int num = 0;
	for(int i=2; i<=10; i++)
	{
		if(isPal(con(n, i)))
		
			num++;
		
		if(num>=2)
			return true;
	}
	return false;
}

string con(int n, int b)
{
	string ret = "";
	while(n!=0)
	{
		ret += (n % b) + '0';
		n /= b;
	}
	return ret;
}

bool isPal(string str)
{
	string ret = str;
	reverse(ret.begin(), ret.end());
	if(ret.compare(str)==0) return true;
	return false;
}