#include <bits/stdc++.h>

using namespace std;

int gcd(int, int);

int main()
{
	int a, b, n;
	cin>>a>>b>>n;
	for(int i=0; i>=0; i++)
	{
		if(i%2==0)
		{
			int r = gcd(a, n);
			if(r>n)
			{
				cout<<1<<endl;
				break;
			}
			n -= r;
		}
		else
		{
			int r = gcd(b, n);
			if(r>n)
			{
				cout<<0<<endl;
				break;
			}
			n -= r;
		}
	}
}

int gcd(int a, int b)
{
	while(b)
	{
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}