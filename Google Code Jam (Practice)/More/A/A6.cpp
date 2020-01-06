#include <bits/stdc++.h>

using namespace std;

char a[4][4];

int check();

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	int t;
	cin>>t;
	for(int tt=1; tt<=t; tt++)
	{
		cout<<"Case #"<<tt<<": ";
		string s[4];
		int d = 0, dots = 0;
		for(int i=0; i<4; i++) 
		{
			cin>>s[i];
			if(!dots)
			{
				int f = 0;
				for(int k=0; k<4; k++)
				{
					if(s[i][k]=='.')
					{
						dots = 1;
						f = 1;
						break;
					}
					if(f) break;
				}
			}
		}
		
		for(int i=0; i<4; i++)
		{
			char prev;
			int won, f = 1;
			for(int j=0; j<4; j++)
			{
				if(j==0) prev = s[i][0];
				else if(s[i][j]=='.')
				{
					f = 0;
					break;
				}
				else if(prev=='T' || prev==s[i][j] || s[i][j]=='T')
				{
					if(s[i][j]!='T') prev = s[i][j];
					if(s[i][j]=='X') won = 1;
					else if(s[i][j]=='O') won = 0;
					if(j==3) break;
				}
				else
				{
					f = 0;
					break;
				}
			}
			if(f)
			{
				if(!won) cout<<"O ";
				else cout<<"X ";
				cout<<"won"<<endl;
				d = 1;
				break;
			}
		}
		
		if(d) continue;
		
		for(int i=0; i<4; i++)
		{
			char prev;
			int won, f = 1;
			for(int j=0; j<4; j++)
			{
				if(j==0) prev = s[0][i];
				else if(s[j][i]=='.')
				{
					f = 0;
					break;
				}
				else if(prev=='T' || prev==s[j][i] || s[j][i]=='T')
				{
					if(s[j][i]!='T') prev = s[j][i];
					if(s[j][i]=='X') won = 1;
					else if(s[j][i]=='O') won = 0;
					if(j==3) break;
				}
				else
				{
					f = 0;
					break;
				}
			}
			if(f)
			{
				if(!won) cout<<"O ";
				else cout<<"X ";
				cout<<"won"<<endl;
				d = 1;
				break;
			}
		}
		
		if(d==1) continue;
		
		int i = 1, j = 1;
		char prev = s[0][0];
		int won, f = 1;
		while(i<4 && j<4)
		{
			if(s[i][j]=='.')
			{
				f = 0;
				break;
			}
			if(s[i][j]==prev || s[i][j]=='T' || prev=='T')
			{
				if(s[i][j]!='T') prev = s[i][j];
				if(s[i][j]=='X') won = 1;
				else if(s[i][j]=='O') won = 0;
			}
			else
			{
				f = 0;
				break;
			}
			
			i++;
			j++;
		}
		
		if(f)
		{
			d = 1;
			if(won) cout<<"X ";
			else cout<<"O ";
			cout<<"won"<<endl;
		}
		
		if(d==1) continue;
		
		i = 1, j = 2;
		prev = s[0][3];
		won, f = 1;
		while(i<4 && j>=0)
		{
			if(s[i][j]=='.')
			{
				f = 0;
				break;
			}
			if(s[i][j]==prev || s[i][j]=='T' || prev=='T')
			{
				if(s[i][j]!='T') prev = s[i][j];
				if(s[i][j]=='X') won = 1;
				else if(s[i][j]=='O') won = 0;
			}
			else
			{
				f = 0;
				break;
			}
			
			i++;
			j--;
		}
		
		if(f)
		{
			d = 1;
			if(won) cout<<"X ";
			else cout<<"O ";
			cout<<"won"<<endl;
		}
		
		if(d) continue;
		
		if(dots==1) cout<<"Game has not completed"<<endl;
		else cout<<"Draw"<<endl;
	}
	
	return 0;
}