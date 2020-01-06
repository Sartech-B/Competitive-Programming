#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

long long int a[300];

int isPal(int, int);

int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++) cin>>a[i];
	int dp[n];
	dp[0] = 1;
	for(int i=1; i<n; i++)
	{
		if(isPal(0, i))
		{
			dp[i] = 1;
			continue;
		}
		else dp[i] = dp[i-1]+1;
		int tmp = 300, f = 0;
		for(int j=1; j<i; j++)
		{
			if(isPal(j, i))
			{
				f = 1;
				tmp = min(tmp, dp[j-1]+1);
			}
		}
		if(!f) continue;
		dp[i] = min(tmp, dp[i]);
	}
	cout<<dp[n-1];
	return 0;
}

int isPal(int s, int e)
{
	int i = s, j = e;
	while(i<j)
	{
		if(a[i]!=a[j]) return 0;
		i++;
		j--;
	}
	return 1;
}