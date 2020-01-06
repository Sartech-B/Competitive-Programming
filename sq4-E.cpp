/* Topological Sort */
#include <bits/stdc++.h>

using namespace std;

int n;
list<int> *graph;
stack<int> s;
bool *vis;

void tSort(int);

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	int e;
	cin>>n>>e;
	graph = new list<int>[n];
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
		if(!vis[i]) tSort(i);
	}
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}

void tSort(int u)
{
	vis[u] = 1;
	for(list<int>::iterator it=graph[u].begin(); it!=graph[u].end(); it++)
	{
		if(!vis[*it]) tSort(*it);
	}
	s.push(u);
}