#include <bits/stdc++.h>

using namespace std;

int a[20][20], cnt = 0, mx = 0, n, m;
bool vis[20][20];

void dfs(int, int);

int main()
{
	cin>>n>>m;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>a[i][j];
			vis[i][j] = 0;
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(a[i][j] && !vis[i][j])
			{
				cnt = 0;
				dfs(i, j);
				mx = max(mx, cnt);
			}
		}
	}
	cout<<mx<<endl;
}

void dfs(int x, int y)
{
	vis[x][y] = 1;
	cnt++;
	if(x-1>=0 && y-1>=0 && a[x-1][y-1] && !vis[x-1][y-1]) dfs(x-1, y-1);
	if(x-1>=0 && y>=0 && a[x-1][y] && !vis[x-1][y]) dfs(x-1, y);
	if(x-1>=0 && y+1<m && a[x-1][y+1] && !vis[x-1][y+1]) dfs(x-1, y+1);
	if(x>=0 && y+1<m && a[x][y+1] && !vis[x][y+1]) dfs(x, y+1);
	if(x+1<n && y+1<m && a[x+1][y+1] && !vis[x+1][y+1]) dfs(x+1, y+1);
	if(x+1<n && y>=0 && a[x+1][y] && !vis[x+1][y]) dfs(x+1, y);
	if(x+1<n && y-1>=0 && a[x+1][y-1] && !vis[x+1][y-1]) dfs(x+1, y-1);
	if(x>=0 && y-1>=0 && a[x][y-1] && !vis[x][y-1]) dfs(x, y-1);
}