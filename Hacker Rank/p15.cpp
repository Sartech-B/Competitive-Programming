#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, ans = 0;
	cin>>n;
	string a, b = "";
	cin>>a;
	bool vis[10000], s[10000];
	vector<int> loc[10000];
	for(int i=0; i<n; i++)
	{
		if(!vis[a[i]])
		{
			b += a[i];
			vis[a[i]] = 1;
		}
		if(i>loc[a[i]][loc[a[i]].size()-1]+1) loc[a[i]].push_back(i);
		else s[a[i]] = 1;
	}
	m = b.length();
	for(int i=0; i<m-1; i++)
	{
		for(int j=i+1; j<m; j++)
		{
			if(s[b[i]]) break;
			if(s[b[j]]) continue;
			int a1 = loc[b[i]].size(), a2 = loc[b[j]].size();
			if(a1==a2 || a1+1==a2 || a1==a2+1)
			{
				if(loc[b[i]][0]<loc[b[j]][0])
				{
					bool f = 1;
					for(int k=1; k<a1; k++)
					{
						if(loc[b[i]][k]<loc[b[j]][k])
						{
							f = 0;
							break;
						}
					}
					if(!f) continue;
					ans = max(ans, a1+a2);
				}
				else
				{
					bool f = 1;
					for(int k=1; k<a2; k++)
					{
						if(loc[b[j]][k]<loc[b[i]][k])
						{
							f = 0;
							break;
						}
					}
					if(!f) continue;
					ans = max(ans, a1+a2);
				}
			}
			else continue;
		}
	}
	
	cout<<ans<<endl;
}
