#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n], dp[n][2];
		for(int i=0; i<n; i++) cin>>a[i];
		dp[0][0] = 0;
		dp[0][1] = 0;
		for(int i=1; i<n; i++)
		{
			dp[i][0] = dp[i-1][1]+a[i-1]-1;
			dp[i][1] = max(a[i]-1+dp[i-1][0], abs(a[i]-a[i-1])+dp[i-1][1]);
		}
		cout<<max(dp[n-1][0], dp[n-1][1])<<endl;
	}
}