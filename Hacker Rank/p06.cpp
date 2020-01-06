#include <bits/stdc++.h>

using namespace std;

long long int ans = 0;
int l, r, cnt = 0;
list<int> *graph;
bool vis[100000];

void dfs(int);
void solve();

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cnt = 0;
		ans = 0;
		int n, m;
		cin>>n>>m>>l>>r;
		for(int i=0; i<n; i++) vis[i] = 0;
		graph = new list<int>[n];
		while(m--)
		{
			int u, v;
			cin>>u>>v;
			u--;
			v--;
			graph[u].push_back(v);
			graph[v].push_back(u);
		}
		for(int i=0; i<n; i++)
		{
			if(!vis[i])
			{
				dfs(i);
				solve();
				cnt = 0;
			}
		}
		cout<<ans<<endl;
	}
}

void dfs(int u)
{
	vis[u] = 1;
	cnt++;
	for(list<int>::iterator it=graph[u].begin(); it!=graph[u].end(); it++)
	{
		if(!vis[*it]) dfs(*it);
	}
}

void solve()
{
	long long int a, b;
	a = cnt*l;
	b = l+(cnt-1)*r;
	ans += min(a, b);
}