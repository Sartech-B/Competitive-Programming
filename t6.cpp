#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	if(n==1)
	{
		cout<<a[0];
		return 0;
	}
	int dp[n], dp1[n], ans;
	dp[0] = a[0];
	dp[1] = a[0] + a[1];
	for(int i=2; i<n; i++)
	{
		dp[i] = a[i] + min(dp[i-1], dp[i-2]);
	}
	dp1[0] = a[n-1];
	dp1[1] = a[0];
	for(int i=2; i<n; i++)
	{
		dp1[i] = a[i-1] + min(dp1[i-1], dp1[i-2]);
	}
	cout<<min(dp[n-1], dp1[n-1]);
	return 0;
}