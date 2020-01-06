#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin>>n;
	long int a[n];
	int rank[n];
	cin>>a[0];
	rank[0] = 1;
	for(int i=1; i<n; i++)
	{
		cin>>a[i];
		if(a[i]==a[i-1]) rank[i] = rank[i-1];
		else rank[i] = rank[i-1]+1;
	}
	cin>>m;
	int prev = n-1;
	for(int i=0; i<m; i++)
	{
		long int v;
		cin>>v;
		int r = 1;
		for(int i=prev; i>=0; i--)
		{
			if(a[i]>v)
			{
				r = rank[i]+1;
				prev = (i+1<n ? i+1 : i);
				break;
			}
			else if(a[i]==v)
			{
				r = rank[i];
				prev = i;
				break;
			}
		}
		cout<<r<<endl;
	}
}