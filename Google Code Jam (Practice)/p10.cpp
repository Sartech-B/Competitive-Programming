#include <bits/stdc++.h>

using namespace std;

int main()
{
	//freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	
	int T;
	cin>>T;
	for(int tt=1; tt<=T; tt++)
	{
		cout<<"Case #"<<tt<<":"<<endl;
		
		int r, c, m, mi;
		cin>>r>>c>>m;
		mi = m;
		char a[r][c];
		for(int i=0; i<r; i++)
		{
			for(int j=0; j<c; j++)
			{
				if(!mi) a[i][j] = '.';
				else
				{
					a[i][j] = '*';
					mi--;
				}
			}
		}
		a[r-1][c-1] = 'c';
		if(r==1 && c!=1 && a[r-1][c-2]=='*') cout<<"Impossible"<<endl;
		else if(c==1 && r!=1 && a[r-2][c-1]=='*') cout<<"Impossible"<<endl;
		else if(r==1 && c==1) cout<<"c"<<endl;
		else if(r!=1 && c!=1 && m>r*c-4) cout<<"Impossible"<<endl;
		else
		{
			for(int i=0; i<r-2; i++)
			{
				for(int j=0; j<c; j++)
				{
					if(!m) cout<<".";
					else
					{
						cout<<"*";
						m--;
					}
				}
				cout<<endl;
			}
			for(int i=r-2; i<r; i++)
			{
				for(int j=0; j<c; j++)
				{
					if(j==c-1 || j==c-2)
					{
						if(i==r-1 && j==c-1) cout<<"c";
						else cout<<".";
					}
					else if(!m) cout<<".";
					else
					{
						cout<<"*";
						m--;
					}
				}
				cout<<endl;
			}
		}
	}
}