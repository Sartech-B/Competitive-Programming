#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int n, k;
vector<int> *a;
bool *vis, *f;

void dfs(int);

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	cin>>n>>k;
	vis = new bool[n];
	f = new bool[n];
	a = new vector<int>[n];
	for(int i=0; i<n; i++)
	{
		int t;
		cin>>t;
		int tmp[t];
		for(int j=0; j<t; j++) cin>>tmp[j];
		sort(tmp, tmp+t);
		for(int j=0; j<t; j++) a[i].push_back(tmp[j]);
		vis[i] = false;
		f[i] = false;
	}
	int ans = 0;
	dfs(0);
	for(int i=0; i<n; i++)
	{
		if(f[i]) ans++;
	}
	cout<<ans+1;
	return 0;
}

void dfs(int m)
{
	vis[m] = true;
	for(int i=0; i<n; i++)
	{
		if(!vis[i] && !f[i])
		{
			vector<int> tmp;
			set_intersection(a[m].begin(), a[m].end(), a[i].begin(), a[i].end(), inserter(tmp, tmp.begin()));
			if(tmp.size()>=k)
			{
				f[i] = true;
				dfs(i);
			}
		}
	}
}