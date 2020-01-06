#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	map<string, int> a;
	vector<pair<string, int> > ans;
	int mx = 0;
	for(int i=0; i<n; i++)
	{
		string name;
		int v;
		cin>>name>>v;
		if(a.find(name)==a.end()) a[name] = 0;
		a[name] += v;
		ans.push_back(make_pair(name, a[name]));
	}
	for(map<string, int>::iterator it=a.begin(); it!=a.end(); it++) mx = max(mx, it->second);
	for(vector<pair<string, int> >::iterator it=ans.begin(); it!=ans.end(); it++)
	{
		if(it->second>=mx && a[it->first]==mx)
		{
			cout<<it->first<<endl;
			break;
		}
	}
}