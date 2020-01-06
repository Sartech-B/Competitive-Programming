#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[12] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048};
	int t;
	cin>>t;
	while(t--)
	{
		int p;
		cin>>p;
		int dp[p+1];
		dp[0] = 0;
		dp[1] = 1;
		for(int i=2; i<=p; i++)
		{
			int mn = -1;
			for(int j=0; j<12;j++)
			{
				if(a[j]>i) break;
				if(mn==-1) mn = dp[i-a[j]]+1;
				else mn = min(mn, dp[i-a[j]]+1);
			}
			dp[i] = mn;
		}
		cout<<dp[p]<<endl;
	}
	return 0;
}