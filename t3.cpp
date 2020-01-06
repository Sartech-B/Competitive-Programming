#include <iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	
	long long int dp[n+1][2];
	dp[0][0] = 0;
	dp[0][1] = 0;
	dp[1][0] = a[0];
	dp[1][1] = a[0];
	
	for(int i=2; i<=n; i++)
	{
		for(int j=0; j<=1; j++)
		{
			if(j==1) dp[i][j] = max(dp[i-2][0] + a[i-1], dp[i-1][0]);
			else dp[i][j] = max(max(dp[i-1][1], dp[i-2][0]) + a[i-1], dp[i-1][0]);
		}
	}
	
	cout<<dp[n][0]<<endl;
	
	return 0;
}