#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, p;
	cin>>n>>p;
	bool vis[n+1];
	vis[0] = 1;
	for(int i=1; i<=n; i++) vis[i] = 0;
	while(p--)
	{
		int x;
		cin>>x;
		vis[x] = 1;
	}
	int q;
	cin>>q;
	while(q--)
	{
		int y;
		cin>>y;
		vis[y] = 1;
	}
	bool f = 0;
	for(int i=1; i<=n; i++)
	{
		if(!vis[i])
		{
			f = 1;
			cout<<"Oh, my keyboard!"<<endl;
			break;
		}
	}
	if(!f) cout<<"I become the guy."<<endl;
}