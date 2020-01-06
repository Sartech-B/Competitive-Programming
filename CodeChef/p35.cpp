#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, p, ans = 0;
		cin>>n>>p;
		long int a[n], dp[n], sum[n], mx = 0;
		for(int i=0; i<n; i++) cin>>a[i];
		sum[0] = a[0];
		dp[0] = sum[0]%p;
		for(int i=1; i<n; i++)
		{
			long int a1 = (a[i]+sum[i-1])%p, b = a[i]%p;
			if(a1>b)
			{
				sum[i] = sum[i-1]+a[i];
				dp[i] = a1;
				mx = max(mx, dp[i]);
			}
			else
			{
				sum[i] = a[i];
				dp[i] = b;
				mx = max(mx, dp[i]);
			}
		}
		for(int i=0; i<n; i++)
		{
			if(dp[i]==mx) ans++;
		}
		cout<<mx<<" "<<ans<<endl;
	}
	return 0;
}