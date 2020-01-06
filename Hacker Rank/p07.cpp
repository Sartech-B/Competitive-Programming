#include <bits/stdc++.h>

using namespace std;

int cnt = 0;
long long int sum = 0;
bool vis[100000];
vector<int> a;
vector<long long int> p;
list<int> *graph;

void dfs(int);

int main()
{
	int n, m;
	cin>>n>>m;
	for(int i=0; i<n; i++) vis[i] = 0;
	graph = new list<int>[n];
	while(m--)
	{
		int u, v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for(int i=0; i<n; i++)
	{
		if(!vis[i])
		{
			dfs(i);
			a.push_back(cnt);
			sum += cnt;
			cnt = 0;
		}
	}
	p.push_back(a[0]);
	for(int i=1; i<a.size(); i++) p.push_back(p[i-1]+a[i]);
	long long int ans = 0;
	for(int i=0; i<a.size(); i++) ans += a[i]*(sum-p[i]);
	cout<<ans<<endl;
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