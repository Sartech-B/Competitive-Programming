#include <bits/stdc++.h>

using namespace std;

bool f(int);

int main()
{
	int n;
	cin>>n;
	for(int i=2; i<=n/2; i++)
	{
		int a, b;
		a = i;
		b = n-i;
		if(!f(a) && !f(b))
		{
			cout<<a<<" "<<b<<endl;
			break;
		}
	}
}

bool f(int n)
{
	for(int i=2; i<=n/2; i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}