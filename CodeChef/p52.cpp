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
		int c[n];
		pair<bool, int> vis[n];
		long long int w[n], p[n], ans = 0;
		for(int i=0; i<n; i++) cin>>c[i];
		for(int i=0; i<n; i++)
		{
			cin>>w[i];
			if(i==0) p[i] = w[i];
			else p[i] = p[i-1]+w[i];
		}
		for(int i=0; i<n; i++) vis[i].first = 0;
		int l = 0;
		ans = w[0];
		vis[c[0]] = make_pair(1, 0);
		for(int i=1; i<n; i++)
		{
			if(vis[c[i]].first && vis[c[i]].second>=l)
			{
				l = vis[c[i]].second+1;
				vis[c[i]] = make_pair(1, i);
			}
			long long int sum = p[i]-((l==0) ? 0 : p[l-1]);
			ans = max(ans, sum);
			vis[c[i]] = make_pair(1, i);
		}
		cout<<ans<<endl;
	}
}