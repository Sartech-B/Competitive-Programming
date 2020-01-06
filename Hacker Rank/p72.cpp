//Unsolved - Manasa and Stones
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, a, b;
		cin>>n>>a>>b;
		n--;
		if(!n)
		{
			cout<<0<<endl;
			continue;
		}
		vector<int> ans;
		bool vis[1000001];
		for(int i=0; i<=n; i++)
		{
			if(!vis[i*a+(n-i)*b]) ans.push_back(i*a+(n-i)*b);
			vis[i*a+(n-i)*b] = 1;
		}
		sort(ans.begin(), ans.end());
		for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
		cout<<endl;
	}
}