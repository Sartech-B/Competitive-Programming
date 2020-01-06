#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<pair<int, string> > a[1000];
	for(int i=0; i<n; i++)
	{
		int x;
		string y;
		cin>>x>>y;
		a[x].push_back(make_pair(i+1, y));
	}
	for(int i=0; i<100; i++)
	{
		for(int j=0; j<a[i].size(); j++)
		{
			if(a[i][j].first<=n/2) cout<<"- ";
			else cout<<a[i][j].second<<" ";
		}
	}
	cout<<endl;
}