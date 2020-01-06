#include <bits/stdc++.h>

using namespace std;

int main()
{
	int dp[50];
	dp[0] = 0;
	dp[1] = 1;
	for(int i=2; i<50; i++) dp[i] = dp[i-1]^i;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0; i<n; i++)
		{
			int x, y;
			cin>>x>>y;
		}
		cout<<dp[n]<<endl;
	}
	return 0;
}