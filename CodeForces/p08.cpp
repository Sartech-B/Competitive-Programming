#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<n-i; j++) cout<<"  ";
		for(int j=0; j<2*i; j++)
		{
			if(j<=i) cout<<j<<" ";
			else cout<<2*i-j<<" ";
		}
		cout<<0<<endl;
	}
	for(int i=n-1; i>=0; i--)
	{
		for(int j=0; j<n-i; j++) cout<<"  ";
		for(int j=0; j<2*i; j++)
		{
			if(j<=i) cout<<j<<" ";
			else cout<<2*i-j<<" ";
		}
		cout<<0<<endl;
	}
}