/* Strongly Connected Components */
#include <bits/stdc++.h>

using namespace std;

int n;
list<int> *graph, *gr, temp;
list<list<int> > scc;
stack<int> s;
bool *vis;

void dfs(int);
void dfs1(int);

int main()
{
	freopen("in4", "r", stdin);
	freopen("out4", "w", stdout);
	int e;
	cin>>n>>e;
	graph = new list<int>[n];
	gr = new list<int>[n];
	vis = new bool[n];
	for(int i=0; i<n; i++) vis[i] = 0;
	for(int i=0; i<e; i++)
	{
		int u, v;
		cin>>u>>v;
		graph[u].push_back(v);
	}
	for(int i=0; i<n; i++)
	{
		if(!vis[i]) dfs(i);
	}
	for(int i=0; i<n; i++) vis[i] = 0;
	for(int i=0; i<n; i++)
	{
		for(list<int>::iterator it=graph[i].begin(); it!=graph[i].end(); it++)
		{
			gr[*it].push_back(i);
		}
	}
	while(!s.empty())
	{
		temp.clear();
		if(!vis[s.top()])
		{
			dfs1(s.top());
			scc.push_back(temp);
		}
		s.pop();
	}
	for(list<list<int> >::iterator it=scc.begin(); it!=scc.end(); it++)
	{
		list<int> elements = *it;
		for(list<int>::iterator it1=elements.begin(); it1!=elements.end(); it1++)
		{
			cout<<*it1<<" ";
		}
		cout<<endl;
	}
}

void dfs(int u)
{
	vis[u] = 1;
	for(list<int>::iterator it=graph[u].begin(); it!=graph[u].end(); it++)
	{
		if(!vis[*it]) dfs(*it);
	}
	s.push(u);
}

void dfs1(int u)
{
	vis[u] = 1;
	temp.push_back(u);
	for(list<int>::iterator it=gr[u].begin(); it!=gr[u].end(); it++)
	{
		if(!vis[*it]) dfs1(*it);
	}
}