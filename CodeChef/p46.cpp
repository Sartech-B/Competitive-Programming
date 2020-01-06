#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string a[2];
		cin>>a[0]>>a[1];
		int c = 0, si;
		bool f = 1, m = 0;
		for(int i=0; i<n; i++)
		{
			if(a[0][i]=='#' || a[1][i]=='#')
			{
				if(a[0][i]=='#') c = 0;
				else if(a[1][i]=='#') c = 1;
				if(a[0][i]=='#' && a[1][i]=='#') m = 1;
				si = i;
				break;
			}
		}
		if(!m)
		{
			for(int i=si; i<n; i++)
			{
				if(a[c][i]=='.')
				{
					bool s = 1;
					for(int j=i; j<n; j++)
					{
						if(a[0][j]=='#' || a[1][j]=='#')
						{
							s = 0;
							break;
						}
					}
					if(!s) f = 0;
					break;
				}
				int tc = (c) ? 0 : 1;
				if(a[tc][i]=='#') c = tc;
				a[c][i] = '0';
			}
			if(f) cout<<"yes"<<endl;
			else cout<<"no"<<endl;
		}
		else
		{
			c = 0;
			//cout<<"si: "<<si<<endl;
			for(int i=si; i<n; i++)
			{
				if(a[c][i]=='.')
				{
					bool s = 1;
					for(int j=i; j<n; j++)
					{
						if(a[0][j]=='#' || a[1][j]=='#')
						{
							s = 0;
							break;
						}
					}
					if(!s) f = 0;
					break;
				}
				int tc = (c==1) ? 0 : 1;
				if(a[tc][i]=='#') c = tc;
				a[c][i] = '0';
			}
			if(f)
			{
				cout<<"yes"<<endl;
				continue;
			}
			c = 1;
			//cout<<endl<<endl<<endl<<a[0]<<endl<<a[1]<<endl<<endl<<endl;
			/*for(int i=0; i<n; i++)
			{
				for(int j=0; j<2; j++)
				{
					if(a[i][j]=='#') a[i][j] = '0';
				}
			}*/
			f = 1;
			for(int i=si; i<n; i++)
			{
				if(a[c][i]=='.')
				{
					bool s = 1;
					for(int j=i; j<n; j++)
					{
						if(a[0][j]=='0' || a[1][j]=='0' || a[0][j]=='#' || a[1][j]=='#')
						{
							s = 0;
							break;
						}
					}
					if(!s) f = 0;
					break;
				}
				int tc = (c) ? 0 : 1;
				if(a[tc][i]=='0' || a[tc][i]=='#') c = tc;
				a[c][i] = '1';
			}
			if(f) cout<<"yes"<<endl;
			else cout<<"no"<<endl;
			//cout<<a[0]<<endl<<a[1]<<endl;
		}
	}
}