#include <bits/stdc++.h>

#define MOD 20011

using namespace std;

int main()
{
	freopen("6.in", "r", stdin);
	freopen("out", "w", stdout);
	int r, c, d;
	cin>>r>>c>>d;
	bool g[r][c];
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++) cin>>g[i][j];
	}
	long long int dp[r][c][d+1][2];
	for(int i=0; i<=d; i++)
	{
		dp[r-1][c-1][i][0] = 1;
		dp[r-1][c-1][i][1] = 1;
	}
	for(int i=r-1; i>=0; i--)
	{
		for(int j=c-1; j>=0; j--)
		{
			if(i==r-1 && j==c-1) continue;
			for(int k=d; k>=0; k--)
			{
				dp[i][j][k][0] = 0;
				dp[i][j][k][1] = 0;
				if(!g[i][j]) continue;
				if(k==d)
				{
					if(i!=r-1) dp[i][j][k][0] += dp[i+1][j][1][1];
					if(j!=c-1) dp[i][j][k][1] += dp[i][j+1][1][0];
				}
				else
				{
					if(i!=r-1)
					{
						dp[i][j][k][0] += dp[i+1][j][1][1];
						dp[i][j][k][1] += dp[i+1][j][k+1][1];
					}
					if(j!=c-1)
					{
						dp[i][j][k][0] += dp[i][j+1][k+1][0];
						dp[i][j][k][1] += dp[i][j+1][1][0];
					}
				}
				bool prev1 = false, prev2 = false;
				if(dp[i][j][k][0]==0) prev1 = true;
				if(dp[i][j][k][1]==0) prev2 = true;
				dp[i][j][k][0] %= MOD;
				dp[i][j][k][1] %= MOD;
				if(dp[i][j][k][0]<=0 && !prev1) dp[i][j][k][0] += MOD;
				if(dp[i][j][k][1]<=0 && !prev2) dp[i][j][k][1] += MOD;
			}
		}
	}
	cout<<dp[0][0][0][0];
	return 0;
}	