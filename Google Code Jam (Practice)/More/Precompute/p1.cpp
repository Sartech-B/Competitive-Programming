#include <bits/stdc++.h>

using namespace std;

bool isPal(long int);

int main()
{
	freopen("out", "w", stdout);
	int n = 0, a[2470];
	for(int i=100; i<1000; i++)
	{
		for(int j=100; j<1000; j++)
		{
			if(isPal(i*j))
			{
				cout<<i*j<<", ";
				n++;
			}
		}
	}
	cout<<"\n\n"<<n;
	return 0;
}

bool isPal(long int n)
{
	string a = "";
	while(n!=0)
	{
		int d = n%10;
		a += d+'0';
		n /= 10;
	}
	int len = a.length();
	int i = 0, j = len-1;
	while(i<j)
	{
		if(a[i]!=a[j]) return false;
		i++;
		j--;
	}
	
	return true;
}