#include <bits/stdc++.h>

using namespace std;

list<pair<int, int> > *graph;

int main()
{
	bool f = 1;
	int n, m;
	cin>>n>>m;
	graph = new list<pair<int, int> >[n];
	while(m--)
	{
		int u, v;
		cin>>u>>v;
		u--;
		v--;
		graph[u].push_back(make_pair(v, 1));
		graph[v].push_back(make_pair(u, 1));
	}
	for(int i=0; i<n; i++)
	{
		if(graph[i].size<2)
		{
			f = 0;
			cout<<0<<endl;
			break;
		}
		int cnt = 0;
		for(list<pair<int, int> >::iterator it=graph[i].begin(); it!=graph[i].end(); it++)
		{
			int a = it->first, b = it->second;
			if(b!=0)
			{
				if(cnt%2==0)
				{
					//i to a edge
					for(list<pair<int, int> >::iterator it1=graph[a].begin(); it1!=graph[a].end(); it1++)
					{
						if(*it1->first==i) it1->second = 0;
					}
				}
			}
		}
	}
	if(!f)
	{
		//
	}
}