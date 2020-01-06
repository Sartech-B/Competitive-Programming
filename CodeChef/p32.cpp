#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m, k;
		cin>>n>>m>>k;
		int a[n+1], l = 0, r = 0;
		for(int i=0; i<=n; i++) a[i] = 0;
		for(int i=0; i<m; i++)
		{
			int v;
			cin>>v;
			a[v]++;
		}
		for(int i=0; i<k; i++)
		{
			int v;
			cin>>v;
			a[v]++;
		}
		for(int i=1; i<=n; i++)
		{
			if(a[i]==0) r++;
			if(a[i]==2) l++;
		}
		cout<<l<<" "<<r<<endl;
	}
	return 0;
}