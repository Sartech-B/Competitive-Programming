#include <bits/stdc++.h>

using namespace std;

int a[1001];
bool vis[1001];
list<int> *graph;

void bfs(int);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		cin>>n>>m;
		graph = new list<int>[n];
		for(int i=0; i<n; i++) a[i] = -1;
		for(int i=0; i<n; i++) vis[i] = 0;
		while(m--)
		{
			int u, v;
			cin>>u>>v;
			u--;
			v--;
			graph[u].push_back(v);
			graph[v].push_back(u);
		}
		int s;
		cin>>s;
		//dfs(s-1, 0);
		bfs(s-1);
		for(int i=0; i<n; i++)
		{
			if(i!=s-1)
			{
				if(i==n-1) cout<<(a[i]==-1 ? a[i] : 6*a[i])<<endl;
				else cout<<(a[i]==-1 ? a[i] : 6*a[i])<<" ";
			}
		}
	}
}

void bfs(int u)
{
	a[u] = 0;
	queue<int> q;
	q.push(u);
	vis[u] = 1;
	while(!q.empty())
	{
		u = q.front();
		q.pop();
		for(list<int>::iterator it=graph[u].begin(); it!=graph[u].end(); it++)
		{
			if(!vis[*it])
			{
				q.push(*it);
				vis[*it] = 1;
				a[*it] = a[u]+1;
			}
		}
	}
}