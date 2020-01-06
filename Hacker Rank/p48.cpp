#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;
	int a[n], mn = n, ans = 0;
	memset(a, -1, sizeof(a));
	for(int i=0; i<m; i++)
	{
		int v;
		cin>>v;
		a[v] = 0;
		mn = min(mn, v);
	}
	for(int i=mn+1; i<n; i++)
	{
		if(a[i]==-1) a[i] = a[i-1]+1;
	}
	for(int i=n-2; i>=0; i--)
	{
		if(a[i]==-1) a[i] = a[i+1]+1;
		else a[i] = min(a[i], a[i+1]+1);
	}
    for(int i=0; i<n; i++) ans = max(ans, a[i]);
	cout<<ans<<endl;
}