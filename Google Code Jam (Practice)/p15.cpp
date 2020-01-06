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
		
		int n;
		cin>>n;
		string a[n];
		int dp[n];
		bool f = 1;
		int s = 0, d = 0;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			if(!f) continue;
			int m = 0;
			for(int j=0; j<n; j++)
			{
				if(a[i][j]=='X') m++;
			}
			dp[i] = m;
			if(m==1) s++;
			else if(m==2) d++;
			else f = 0;
		}
		if(s!=1 || d!=n-1) f = 0;
		s = 0;
		d = 0;
		for(int j=0; j<n; j++)
		{
			if(!f) break;
			int m = 0, req = -1, req1 = -1;
			for(int i=0; i<n; i++)
			{
				if(a[i][j]=='X' && req==-1)
				{
					m++;
					req = dp[i];
				}
				else if(a[i][j]=='X' && req1==-1)
				{
					m++;
					req1 = dp[i];
				}
				else if(a[i][j]=='X') m++;
			}
			if(req==-1 && req1==-1) f = 0;
			else if(req!=-1 && req1==-1 && m!=req) f = 0;
			else if((m!=req || m!=req1) && req!=-1 && req1!=-1) f = 0;
			if(m==1) s++;
			else if(m==2) d++;
			else f = 0;
		}
		if(s!=1 || d!=n-1) f = 0;
		if(f) cout<<"POSSIBLE"<<endl;
		else cout<<"IMPOSSIBLE"<<endl;
	}
}