#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n;
		cin>>n;
		if(n==1 || n==2)
		{
			cout<<1<<endl;
			continue;
		}
		long int a;
		a = (-1+(sqrt(1+4*2*n)))/2;
		cout<<a<<endl;
	}
}