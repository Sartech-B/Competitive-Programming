#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, d;
	cin>>n>>d;
	int cnt = 0;
	int a[n], ans[n];
	int dp[20001];
	memset(dp, -1, sizeof(dp));
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		dp[a[i]] = 1;
		if(a[i]-d>=0 && dp[a[i]-d]!=-1)
		{
			dp[a[i]] = dp[a[i]-d]+1;
			if(dp[a[i]]>=3) cnt++;
		}
		else dp[a[i]] = 1;
	}
	cout<<cnt<<endl;
}
