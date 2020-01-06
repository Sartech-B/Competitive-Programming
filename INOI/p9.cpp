#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	int n;
	cin>>n;
	long long int a[n], b[n], ans = -10000000000, pref[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		ans = max(ans, a[i]);
		if(i==0) continue;
		ans = max(ans, a[i]+a[i-1]);
	}
	for(int i=0; i<n; i++)
	{
		cin>>b[i];
		if(i==0) pref[i] = b[i];
		else pref[i] = b[i]+pref[i-1];
	}
}