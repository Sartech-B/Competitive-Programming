#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen("8.in", "r", stdin);
	freopen("out", "w", stdout);
	long int n, k;
	cin>>n>>k;
	long int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	long int dp[n], dp1[n];
	dp1[0] = 0;
	if(n>1) dp1[1] = a[0];
	for(int i=2; i<n; i++) dp1[i] = max(dp1[i-1]+a[i-1], dp1[i-2]+a[i-2]);
	dp[n-1] = dp1[n-1];
	if(n-2>=k-1) dp[n-2] = max(dp[n-1]+a[n-1], dp1[n-2]);
	for(int i=n-3; i>=k-1; i--) dp[i] = max(dp1[i], max(dp[i+1]+a[i+1], dp[i+2]+a[i+2]));
	cout<<dp[k-1];
	return 0;
}