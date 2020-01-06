#include <bits/stdc++.h>

using namespace std;

bool isDis(int);

int main()
{
	int n;
	cin>>n;
	for(int i=n+1; i>0; i++)
	{
		if(isDis(i))
		{
			cout<<i<<endl;
			break;
		}
	}
}

bool isDis(int n)
{
	string a = "";
	while(n!=0)
	{
		int d = n%10;
		a += d+'0';
		n /= 10;
	}
	for(int i=0; i<a.length(); i++)
	{
		for(int j=i+1; j<a.length(); j++)
		{
			if(a[i]==a[j]) return 0;
		}
	}
	return 1;
}