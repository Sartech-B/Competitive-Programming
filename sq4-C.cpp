/* Undirected Weighted Graph - STL, Shortest Path */
#include <bits/stdc++.h>

using namespace std;

int n, *vis;
list<pair<int, int> > *graph;

int s(int, int);

int main()
{
	freopen("in1", "r", stdin);
	freopen("out2", "w", stdout);
	int ni, e;
	cin>>ni>>e;
	n = ni;
	vis = new int[n];
	graph = new list<pair<int, int> >[n];
	while(e--)
	{
		int u, v, w;
		cin>>u>>v>>w;
		u--;
		v--;
		graph[u].push_back(make_pair(v, w));
		graph[v].push_back(make_pair(u, w));
	}
	long int ans = 0;
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			for(int k=0; k<n; k++) vis[k] = 0;
			long int tmp = s(i, j);
			printf("Shortest path from %d - %d: %d\n\n", i+1, j+1, tmp);
			ans = max(ans, tmp);
		}
	}
	cout<<"\nSum: "<<ans;
	return 0;
}

int s(int a, int b)
{
	if(a==b) return 0;
	vis[a] = 1;
	//if(!graph[a].size()) return -1;
	int ans = 10000001;
	for(list<pair<int, int> >::iterator it=graph[a].begin(); it!=graph[a].end(); it++)
	{
		if(!vis[it->first]) ans = min(ans, it->second + s(it->first, b));
	}
	vis[a] = 0;
	return ans;
}