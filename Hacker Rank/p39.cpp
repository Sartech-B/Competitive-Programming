#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n], dp[101];
	memset(dp, 0, sizeof(dp));
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		dp[a[i]]++;
	}
	int ans = 0;
	for(int i=1; i<100; i++) ans = max(ans, dp[i]+dp[i+1]);
	cout<<ans<<endl;
}