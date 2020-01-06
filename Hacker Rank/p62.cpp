#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a, b = "";
		cin>>a;
		sort(a.begin(), a.end());
		int cnt[500];
		for(int i=0; i<500; i++) cnt[i] = 0;
		for(int i=0; i<a.length(); i++) cnt[a[i]]++;
		for(int i=0; i<500; i++)
		{
			if(cnt[i]>=2)
			{
				int v = ceil(cnt[i]/2)
				for(int j=0; j<v; j++) b += i;
			}
		}
		vector<string> ans;
		sort(b.begin(), b.end());
		ans.push_back(b);
		
	}
}