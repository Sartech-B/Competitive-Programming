/* Undirected Weighted Graph - STL, Shortest Path - Floyd-Warshall Algorithm */
#include <bits/stdc++.h>

using namespace std;

int n;
list<pair<int, int> > *graph;

int main()
{
	freopen("in1", "r", stdin);
	freopen("out3", "w", stdout);
	int e;
	cin>>n>>e;
	graph = new list<pair<int, int> >[n];
	long long int w[n][n][n+1];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i==j) w[i][j][0] = 0;
			else w[i][j][0] = 1000001;
		}
	}
	while(e--)
	{
		int u, v, we;
		cin>>u>>v>>we;
		u--;
		v--;
		w[u][v][0] = we;
		w[v][u][0] = we;
		graph[u].push_back(make_pair(v, we));
		graph[v].push_back(make_pair(u, we));
	}
	
	for(int k=1; k<=n; k++)
	{
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				w[i][j][k] = min(w[i][j][k-1], w[i][k-1][k-1]+w[k-1][j][k-1]);
			}
		}
	}
	
	long long int ans = 0;
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			long long int tmp = w[i][j][n];
			if(tmp!=1000001) ans = max(ans, tmp);
		}
	}
	cout<<ans;
	return 0;
}