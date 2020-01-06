#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int n;
ll *a, dp[5000][2];

int d(ll);
ll rec(int, int, ll, ll);

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	ll s;
	cin>>n>>s;
	a = new ll[n];
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<2; j++) dp[i][j] = -1;
	}
	cout<<max(rec(0, 0, s, 0), rec(0, 1, s, 0));
	return 0;
}

int d(ll m)
{
	ll ret = 0;
	while(m!=0)
	{
		int di = m%10;
		ret += di;
		m /= 10;
	}
	return ret*ret*ret;
}

ll rec(int i, int opt, ll ps, ll px)
{
	if(i>=n) return px;
	//if(dp[i][opt]!=-1) return dp[i][opt];
	if(!opt) ps += d(ps);
	else px += a[i]*ps;
	dp[i][opt] = max(rec(i+1, 0, ps, px), rec(i+1, 1, ps, px));
	return dp[i][opt];
}