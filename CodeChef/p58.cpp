#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, t;
	cin>>n>>k>>t;
	int a[2*n], sum[2*n], s = 0;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		a[i+n] = a[i];
		s += a[i];
	}
	string p;
	cin>>p;
	int cnt = n, ans = 0;
	sum[0] = a[0];
	for(int i=1; i<k; i++) sum[i] = sum[i-1]+a[i];
	for(int i=k; i<2*n; i++) sum[i] = sum[i-1]+a[i]-a[i-k];
	int dp[2*n];
	dp[0] = 0;
	deque<int> q;
	for(int i=k; i<n+1; i++)
	{
		while(!q.empty() && sum[i]>=sum[q.back()]) q.pop_back();
		q.push_back(i);
	}
	for(int i=n+1; i<2*n; i++)
	{
		dp[i-n] = sum[q.front()];
		while(!q.empty() && q.front()<i-k+1) q.pop_front();
		while(!q.empty() && sum[i]>=sum[q.back()]) q.pop_back();
		q.push_back(i);
	}
	dp[n] = sum[q.front()];
	for(int i=0; i<t; i++)
	{
		if(p[i]=='!')
		{
			cnt--;
			if(!cnt) cnt = n;
		}
		else
		{
			if(k>=n) cout<<s<<endl;
			else
			{
				cout<<dp[cnt]<<endl;
				/*
				int mx = 0;
				for(int j=cnt+k-1; j<cnt+n; j++) mx = max(mx, sum[j]);
				cout<<mx<<endl;
				*/
			}
		}
	}
}