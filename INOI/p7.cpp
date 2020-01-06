#include <bits/stdc++.h>
 
using namespace std;
 
list<int> *graph;
long int *a, ans = -100000000, *dp;
int j;

long int dfs(int);
 
int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	int n;
	cin>>n;
	graph = new list<int>[n];
	a = new long int[n];
	dp = new long int[n];
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++)
	{
		int u;
		cin>>u;
		u--;
		if(u!=-2) graph[i].push_back(u);
		else j = i;
		dp[i] = -1000000000;
	}
	for(int i=0; i<n; i++)
	{
		if(i!=j) dp[i] = dfs(i);
		else dp[i] = 0;
	}
	for(int i=0; i<n; i++)
	{
		if(i==j) continue;
		ans = max(ans, dp[i]-a[i]);
	}
	cout<<ans;
	return 0;
}
 
long int dfs(int u)
{
	if(u==j) return 0;
	long int ret = -1000000000;
	for(list<int>::iterator it=graph[u].begin(); it!=graph[u].end(); it++)
	{
		if(ret==-1000000000) ret = a[*it];
		else ret = max(ret, a[*it]);
		if(dp[*it]==-1000000000) ret = max(ret, dfs(*it));
		else ret = max(ret, dp[*it]);
	}
	return ret;
} 
