#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, ni;
		cin>>n;
		ni = n;
		map<string, string> a;
		map<string, int> dp;
		while(n--)
		{
			string s, d;
			cin>>s>>d;
			a[s] = d;
			dp[s] = 0;
			dp[d] = 0;
		}
		for(map<string, string>::iterator it=a.begin(); it!=a.end(); it++) dp[it->second] += 1;
		string cur;
		for(map<string, int>::iterator it=dp.begin(); it!=dp.end(); it++)
		{
			if(!it->second)
			{
				cur = it->first;
				break;
			}
		}
		while(ni--)
		{
			cout<<cur<<"-"<<a[cur]<<" ";
			if(a.find(cur)!=a.end()) cur =  a[cur];
		}
		cout<<endl;
	}
}