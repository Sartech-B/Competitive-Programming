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
		
		string a;
		cin>>a;
		vector<int> ans;
		for(int i=0; i<a.length(); i++)
		{
			if(a[i]=='Z')
			{
				a[i] = '0';
				int e = 1, r = 1, o = 1;
				for(int j=0; j<a.length(); j++)
				{
					if(a[j]=='E' && e)
					{
						a[j] = '0';
						e--;
					}
					if(a[j]=='R' && r)
					{
						a[j] = '0';
						r--;
					}
					if(a[j]=='O' && o)
					{
						a[j] = '0';
						o--;
					}
				}
				ans.push_back(0);
			}
			if(a[i]=='W')
			{
				a[i] = '0';
				int t = 1, o = 1;
				for(int j=0; j<a.length(); j++)
				{
					if(a[j]=='T' && t)
					{
						a[j] = '0';
						t--;
					}
					if(a[j]=='O' && o)
					{
						a[j] = '0';
						o--;
					}
				}
				ans.push_back(2);
			}
			if(a[i]=='U')
			{
				a[i] = '0';
				int f = 1, r = 1, o = 1;
				for(int j=0; j<a.length(); j++)
				{
					if(a[j]=='F' && f)
					{
						a[j] = '0';
						f--;
					}
					if(a[j]=='R' && r)
					{
						a[j] = '0';
						r--;
					}
					if(a[j]=='O' && o)
					{
						a[j] = '0';
						o--;
					}
				}
				ans.push_back(4);
			}
			if(a[i]=='X')
			{
				a[i] = '0';
				int s = 1, i = 1;
				for(int j=0; j<a.length(); j++)
				{
					if(a[j]=='S' && s)
					{
						a[j] = '0';
						s--;
					}
					if(a[j]=='I' && i)
					{
						a[j] = '0';
						i--;
					}
				}
				ans.push_back(6);
			}
			if(a[i]=='G')
			{
				a[i] = '0';
				int e = 1, i = 1, h = 1, t = 1;
				for(int j=0; j<a.length(); j++)
				{
					if(a[j]=='E' && e)
					{
						a[j] = '0';
						e--;
					}
					if(a[j]=='I' && i)
					{
						a[j] = '0';
						i--;
					}
					if(a[j]=='H' && h)
					{
						a[j] = '0';
						h--;
					}
					if(a[j]=='T' && t)
					{
						a[j] = '0';
						t--;
					}
				}
				ans.push_back(8);
			}
		}
		
		for(int i=0; i<a.length(); i++)
		{
			if(a[i]=='R')
			{
				a[i] = '0';
				int e = 2, t = 1, h = 1;
				for(int j=0; j<a.length(); j++)
				{
					if(a[j]=='E' && e)
					{
						a[j] = '0';
						e--;
					}
					if(a[j]=='T' && t)
					{
						a[j] = '0';
						t--;
					}
					if(a[j]=='H' && h)
					{
						a[j] = '0';
						h--;
					}
				}
				ans.push_back(3);
			}
		}
		
		for(int i=0; i<a.length(); i++)
		{
			if(a[i]=='F')
			{
				a[i] = '0';
				int i = 1, v = 1, e = 1;
				for(int j=0; j<a.length(); j++)
				{
					if(a[j]=='E' && e)
					{
						a[j] = '0';
						e--;
					}
					if(a[j]=='V' && v)
					{
						a[j] = '0';
						v--;
					}
					if(a[j]=='I' && i)
					{
						a[j] = '0';
						i--;
					}
				}
				ans.push_back(5);
			}
		}
		
		for(int i=0; i<a.length(); i++)
		{
			if(a[i]=='I')
			{
				a[i] = '0';
				int n = 2, e = 1;
				for(int j=0; j<a.length(); j++)
				{
					if(a[j]=='E' && e)
					{
						a[j] = '0';
						e--;
					}
					if(a[j]=='N' && n)
					{
						a[j] = '0';
						n--;
					}
				}
				ans.push_back(9);
			}
		}
		
		for(int i=0; i<a.length(); i++)
		{
			if(a[i]=='S' || a[i]=='V')
			{
				int e = 2, n = 1, v = 1, s = 1;
				for(int j=0; j<a.length(); j++)
				{
					if(a[j]=='E' && e)
					{
						a[j] = '0';
						e--;
					}
					if(a[j]=='N' && n)
					{
						a[j] = '0';
						n--;
					}
					if(a[j]=='V' && v)
					{
						a[j] = '0';
						v--;
					}
					if(a[j]=='S' && s)
					{
						a[j] = '0';
						s--;
					}
				}
				ans.push_back(7);
			}
		}
		
		for(int i=0; i<a.length(); i++)
		{
			if(a[i]=='O' || a[i]=='N' || a[i]=='E')
			{
				int e = 1, n = 1, o = 1;
				for(int j=0; j<a.length(); j++)
				{
					if(a[j]=='E' && e)
					{
						a[j] = '0';
						e--;
					}
					if(a[j]=='N' && n)
					{
						a[j] = '0';
						n--;
					}
					if(a[j]=='O' && o)
					{
						a[j] = '0';
						o--;
					}
				}
				ans.push_back(1);
			}
		}
		sort(ans.begin(), ans.end());
		for(vector<int>::iterator it=ans.begin(); it!=ans.end(); it++) cout<<*it;
		cout<<endl;
	}
}