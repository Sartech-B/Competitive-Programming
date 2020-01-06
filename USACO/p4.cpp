/*
ID: sarthak16
PROG: beads
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int lcount(string);
string break_necklace(int, string);

int main()
{
	freopen("beads.in", "r", stdin);
	freopen("beads.out", "w", stdout);
	
	int n;
	
	scanf("%d", &n);
	
	string str;
	cin>>str;
	
	int len = str.length();
	
	int mx = 0;
	for(int i=0; i<len; i++)
	{
		string astr = break_necklace(i, str);
		int tnum = lcount(astr);
		
		if(tnum>len) tnum = len;
		
		if(tnum>mx)
			mx = tnum;
	}
	
	cout<<mx<<endl;
	
	return 0;
}

string break_necklace(int point, string str)
{
	string ans;
	ans = str.substr(point);
	if(point!=0) ans += str.substr(0, point);
	return ans;
}

int lcount(string str)
{
	int ans = 0;
	char ch;
	
	for(int i=0; i<str.length(); i++)
	{
		if(str[i]=='w')
			ans++;
		else
		{
			ch = str[i];
			for(int j=i; j<str.length(); j++)
			{
				if(str[j]==ch || str[j]=='w')
					ans++;
				else break;
			}
			break;
		}
	}
	
	for(int i=str.length()-1; i>=0; i--)
	{
		if(str[i]=='w')
			ans++;
		else
		{
			ch = str[i];
			for(int j=i; j>=0; j--)
			{
				if(str[j]==ch || str[j]=='w')
					ans++;
				else break;
			}
			break;
		}
	}
	
	//if(ans>str.length()) ans = str.length();
	return ans;
}