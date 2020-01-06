#include <iostream>

using namespace std;
 
int main()
{
	long int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	int dp[n], ans = 0;
	if(n>3)
	{
		dp[0] = a[0];
		dp[1] = a[1];
		dp[2] = a[2];
		for(int i=3; i<n; i++)
		{
			dp[i] = min(dp[i-1], dp[i-2]);
			dp[i] = min(dp[i], dp[i-3]) + a[i];
			ans += dp[i];
		}
		ans = min(dp[n-2], dp[n-1]);
		ans = min(ans, dp[n-3]);
		cout<<ans;
	}
	else
	{
		int mn = 10001;
		for(int i=0; i<n; i++) mn = min(mn, a[i]);
		cout<<mn;
	}
	return 0;
} 