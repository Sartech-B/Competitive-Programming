#include <iostream>
#include <algorithm>

using namespace std;

int a[2501];

int bSearch(int, int);

int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a, a+n);
	int dp[n][n-1];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-1; j++) dp[i][j] = 0;
	}
	int ans = 0;
	for(int t=0; t<n-1; t++) dp[0][t] = 1;
	for(int i=1; i<n; i++)
	{
		for(int j=0; j<i; j++)
		{
			int d = a[i] - a[j], index = bSearch(n, a[j]-d);
			if(index==-1)
			{
				dp[i][j] = 2;
				continue;
			}
			dp[i][j] = dp[j][index] + 1;
			ans = max(ans, dp[i][j]);
		}
	}
	cout<<ans;
	
	return 0;
}

int bSearch(int n, int v)
{
	int i = 0, j = n-1;
	while(i<=j)
	{
		int mid = (i+j)/2;
		if(a[mid]==v) return mid;
		else if(v<a[mid]) j = mid - 1;
		else i = mid + 1;
	}
	return -1;
}