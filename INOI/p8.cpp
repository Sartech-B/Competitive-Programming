#include <bits/stdc++.h>

using namespace std;

int n, k, *a;
long int *v;

long int dp(int, int);

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	cin>>n>>k;
	a = new int[n];
	v = new long int[n];
	for(int i=0; i<n; i++) cin>>v[i];
	for(int i=0; i<n; i++) cin>>a[i];
	cout<<dp(0, n-1);
	return 0;
}

long int dp(int i, int j)
{
	if(i>=j) return 0;
	if(j>=n || i<0) return 0;
	if(a[i]==a[j]-k)
	{
		long int ret = max(v[i]+v[j], max(dp(i+1, j-1)+v[i]+v[j], dp(i+1, j-1)));
		if(ret<0) return 0;
		else return ret;
	}
	else
	{
		long int ret = max(dp(i, j-1), dp(i+1, j));
		if(ret<0) return 0;
		else return ret;
	}
}