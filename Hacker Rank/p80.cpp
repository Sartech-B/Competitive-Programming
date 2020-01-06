#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	int dp[n];
	dp[0] = 1;
	for(int i=1; i<n; i++)
	{
		if(a[i]>a[i-1]) dp[i] = dp[i-1]+1;
		else if(a[i]<a[i-1])
		{
			dp[i] = 1;
			if(dp[i-1]==1)
			{
				for(int j=i-1; j>=0; j--)
				{
					if(dp[j]!=dp[j+1] || a[j]==a[j+1]) break;
					dp[j]++;
				}
			}
		}
		else dp[i] = 1;
	}
	int ans = 0;
	for(int i=0; i<n; i++) ans += dp[i];
	cout<<ans<<endl;
}