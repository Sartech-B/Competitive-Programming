#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;
	int a[n], sum = 0;
	memset(a, 0, sizeof(a));
	for(int i=0; i<n; i++)
	{
		int j, v;
		cin>>j>>v;
		a[j-1] += v;
		sum += v;
	}
	int t1 = sum/m, ta = sum-t1*m+t1;
	for(int i=1; i<=m; i++)
	{
		if(i==1) cout<<i<<" "<<a[i-1]-ta<<endl;
		else cout<<i<<" "<<a[i-1]-t1<<endl;
	}
}