#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m, n;
		cin>>n>>m;
		bool a[n+1];
		for(int i=1; i<=n; i++) a[i] = 0;
		for(int i=0; i<m; i++)
		{
			int v;
			cin>>v;
			a[v] = 1;
		}
		vector<int> ans1, ans2;
		bool alt = 0;
		for(int i=1; i<=n; i++)
		{
			if(!a[i])
			{
				if(!alt) ans1.push_back(i);
				else ans2.push_back(i);
				alt = !alt;
			}
		}
		for(int i=0; i<ans1.size(); i++) cout<<ans1[i]<<" ";
		cout<<endl;
		for(int i=0; i<ans2.size(); i++) cout<<ans2[i]<<" ";
		cout<<endl;
	}
}