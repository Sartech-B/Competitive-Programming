#include <bits/stdc++.h>

using namespace std;

vector<int> *a;
int ans = 0, n, e;
bool *vis;

int dfs(int);

int main()
{
	cin>>n>>e;
	n++;
	a = new vector<int>[n];
	vis = new bool[n];
	for(int i=0; i<n; i++) vis[i] = 0;
	while(e--)
	{
		int to, from;
		cin>>from>>to;
		a[from].push_back(to);
		a[to].push_back(from);
	}
	dfs(1);
	cout<<ans<<endl;
}

int dfs(int u)
{
	int ret = 1;
	vis[u] = 1;
	for(int i=0; i<a[u].size(); i++)
	{
		if(!vis[a[u][i]])
		{
			int num = dfs(a[u][i]);
			if(num%2==0) ans++;
			else ret += dfs(a[u][i]);
		}
	}
	return ret;
}