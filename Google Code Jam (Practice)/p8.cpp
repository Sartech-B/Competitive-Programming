#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	
	int T;
	cin>>T;
	for(int tt=1; tt<=T; tt++)
	{
		cout<<"Case #"<<tt<<": ";
		
		bool vis[101];
		for(int i=0; i<101; i++) vis[i] = 0;
		int n, m;
		cin>>n>>m;
		int a[n][m];
		bool f = 1;
		vector<int> h;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				cin>>a[i][j];
				if(!vis[a[i][j]])
				{
					h.push_back(a[i][j]);
					vis[a[i][j]] = 1;
				}
			}
		}
		sort(h.begin(), h.end());
		for(vector<int>::iterator it=h.begin(); it!=h.end(); it++)
		{
			int c = 0, p = 0;
			bool pm[n][m];
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<m; j++) pm[i][j] = 0;
			}
			for(int i=1; i<m-1; i++)
			{
				if(a[0][i]==*it)
				{
					for(int j=0; j<n; j++)
					{
						if(a[j][i]!=*it)
						{
							f = 0;
							break;
						}
						if(!pm[j][i])
						{
							pm[j][i] = 1;
							p++;
						}
					}
				}
				if(!f) break;
			}
			if(!f) break;
			for(int i=1; i<n-1; i++)
			{
				if(a[i][0]==*it)
				{
					for(int j=0; j<m; j++)
					{
						if(a[i][j]!=*it)
						{
							f = 0;
							break;
						}
						if(!pm[i][j])
						{
							pm[i][j] = 1;
							p++;
						}
					}
				}
				if(!f) break;
			}
			if(!f) break;
			if(a[0][0]==*it)
			{
				bool f1 = 1, f2 = 1;
				for(int i=0; i<m; i++)
				{
					if(a[0][i]!=*it)
					{
						f1 = 0;
						break;
					}
					if(!pm[0][i])
					{
						pm[0][i] = 1;
						p++;
					}
				}
				for(int i=0; i<n; i++)
				{
					if(a[i][0]!=*it)
					{
						f2 = 0;
						break;
					}
					if(!pm[i][0])
					{
						pm[i][0] = 1;
						p++;
					}
				}
				if(!f1 && !f2) f = 0;
			}
			if(!f) break;
			if(a[0][m-1]==*it)
			{
				bool f1 = 1, f2 = 1;
				for(int i=0; i<m; i++)
				{
					if(a[0][i]!=*it)
					{
						f1 = 0;
						break;
					}
					if(!pm[0][i])
					{
						pm[0][i] = 1;
						p++;
					}
				}
				for(int i=0; i<n; i++)
				{
					if(a[i][m-1]!=*it)
					{
						f2 = 0;
						break;
					}
					if(!pm[i][m-1])
					{
						pm[i][m-1] = 1;
						p++;
					}
				}
				if(!f1 && !f2) f = 0;
			}
			if(!f) break;
			if(a[n-1][0]==*it)
			{
				bool f1 = 1, f2 = 1;
				for(int i=0; i<m; i++)
				{
					if(a[n-1][i]!=*it)
					{
						f1 = 0;
						break;
					}
					if(!pm[n-1][i])
					{
						pm[n-1][i] = 1;
						p++;
					}
				}
				for(int i=0; i<n; i++)
				{
					if(a[i][0]!=*it)
					{
						f2 = 0;
						break;
					}
					if(!pm[i][0])
					{
						pm[i][0] = 1;
						p++;
					}
				}
				if(!f1 && !f2) f = 0;
			}
			if(!f) break;
			if(a[n-1][m-1]==*it)
			{
				bool f1 = 1, f2 = 1;
				for(int i=0; i<m; i++)
				{
					if(a[n-1][i]!=*it)
					{
						f1 = 0;
						break;
					}
					if(!pm[n-1][i])
					{
						pm[n-1][i] = 1;
						p++;
					}
				}
				for(int i=0; i<n; i++)
				{
					if(a[i][m-1]!=*it)
					{
						f2 = 0;
						break;
					}
					if(!pm[i][m-1])
					{
						pm[i][m-1] = 1;
						p++;
					}
				}
				if(!f1 && !f2) f = 0;
			}
			if(!f) break;
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<m; j++)
				{
					if(a[i][j]==*it)
					{
						c++;
						a[i][j] = *(it+1);
					}
				}
			}
			if(c!=p)
			{
				f = 0;
				break;
			}
		}
		if(!f) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}