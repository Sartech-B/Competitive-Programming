#include <bits/stdc++.h>

using namespace std;

bool ans(int, int, vector<int>);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		cin>>n>>m;
		bool dp[m+1];
		vector<int> a;
		for(int i=0; i<n; i++)
		{
			int v;
			cin>>v;
			a.push_back(v);
		}
		sort(a.begin(), a.end());
		if(ans(m, a.size()-1, a)) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}

bool ans(int m, int n, vector<int> a)
{
	if(!m) return 1;
	if(n==-1) return 0;
	//cout<<"m: "<<m<<" n: "<<n<<" a[i]: "<<a[n]<<endl;
	for(int i=n; i>=0; i--)
	{
		if(a[i]<=m && ans(m-a[i], i-1, a)) return 1;
	}
	return 0;
}