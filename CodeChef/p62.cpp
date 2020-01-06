#include <bits/stdc++.h>

using namespace std;

list<int> *a;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		a = new list<int>[n];
		bool f[n];
		for(int i=0; i<n; i++) f[i] = 0;
		for(int i=1; i<n; i++)
		{
			int u, v;
			cin>>u>>v;
			u--;
			v--;
			a[u].push_back(v);
			f[u] = 1;
		}
		bool ans = 1;
		for(int i=0; i<n; i++)
		{
			if(f[i])
			{
				if(a[i].size()!=3)
				{
					ans = 0;
					break;
				}
			}
		}
		if(!ans) cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
			for(int i=0; i<n; i++)
			{
				if(f[i])
				{
					cout<<i+1<<" ";
					for(list<int>::iterator j=a[i].begin(); j!=a[i].end(); j++) cout<<*j+1<<" ";
					cout<<endl;
				}
			}
		}
	}
}