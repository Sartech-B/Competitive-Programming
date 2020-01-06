#include <bits/stdc++.h>

using namespace std;

int n;
list<pair<int, int> > *graph1, *graph2;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int e = n-1;
		graph1 = new list<pair<int, int> >[n];
		graph2 = new list<pair<int, int> >[n];
		long long int w1[n][n][n+1], w2[n][n][n+1];
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				if(i==j) w1[i][j][0] = 0;
				else w1[i][j][0] = 10000001;
				if(i==j) w2[i][j][0] = 0;
				else w2[i][j][0] = 10000001;
			}
		}
		while(e--)
		{
			int u, v, we;
			cin>>u>>v>>we;
			u--;
			v--;
			w1[u][v][0] = we;
			w1[v][u][0] = we;
			graph1[u].push_back(make_pair(v, we));
			graph1[v].push_back(make_pair(u, we));
		}
		
		e = n-1;
		
		while(e--)
		{
			int u, v, we;
			cin>>u>>v>>we;
			u--;
			v--;
			w2[u][v][0] = we;
			w2[v][u][0] = we;
			graph2[u].push_back(make_pair(v, we));
			graph2[v].push_back(make_pair(u, we));
		}
		
		for(int k=1; k<=n; k++)
		{
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<n; j++)
				{
					w1[i][j][k] = min(w1[i][j][k-1], w1[i][k-1][k-1]+w1[k-1][j][k-1]);
				}
			}
		}
		
		for(int k=1; k<=n; k++)
		{
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<n; j++)
				{
					w2[i][j][k] = min(w2[i][j][k-1], w2[i][k-1][k-1]+w2[k-1][j][k-1]);
				}
			}
		}
		
		long long int ans = 0;
		for(int i=0; i<n-1; i++)
		{
			for(int j=i+1; j<n; j++)
			{
				long long int tmp1 = w1[i][j][n], tmp2 = w2[i][j][n];
				if(tmp1!=10000001 || tmp2!=10000001) ans += min(tmp1, tmp2);
			}
		}
		cout<<ans<<endl;
	}
}