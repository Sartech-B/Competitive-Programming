/* Graph - STL */
#include <bits/stdc++.h>

using namespace std;

int n, *vis;

list<int> *graph;

void bfs(int);
void dfs(int);

int main()
{
	freopen("in", "r", stdin);
	freopen("out1", "w", stdout);
	int ni, e;
	cin>>ni>>e;
	n = ni;
	vis = new int[n];
	for(int i=0; i<n; i++) vis[i] = 0;
	graph = new list<int>[n];
	while(e--)
	{
		int u, v;
		cin>>u>>v;
		graph[u].push_back(v);
	}
	cout<<"\n\nBFS:\n\n\n";
	bfs(0);
	cout<<"\n\nDFS:\n\n\n";
	dfs(0);
}

void bfs(int u)
{
	int visited[n];
	for(int i=0; i<n; i++) visited[i] = 0;
	queue<int> q;
	q.push(u);
	visited[u] = 1;
	while(!q.empty())
	{
		u = q.front();
		cout<<u<<endl;
		q.pop();
		for(list<int>::iterator it=graph[u].begin(); it!=graph[u].end(); it++)
		{
			if(!visited[*it])
			{
				q.push(*it);
				visited[*it] = 1;
			}
		}
	}
}

void dfs(int u)
{
	vis[u] = 1;
	cout<<u<<endl;
	for(list<int>::iterator it=graph[u].begin(); it!=graph[u].end(); it++)
	{
		if(!vis[*it]) dfs(*it);
	}
}