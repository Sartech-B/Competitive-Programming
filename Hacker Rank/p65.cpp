#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	bool vis[26];
	int cnt[26];
	for(int i=0; i<26; i++)
	{
		vis[i] = 0;
		cnt[i] = 0;
	}
	for(int t=0; t<n; t++)
	{
		string a;
		cin>>a;
		for(int i=0; i<a.length(); i++)
		{
			if(!vis[a[i]-'a'])
			{
				vis[a[i]-'a'] = 1;
				cnt[a[i]-'a']++;
			}
		}
		for(int i=0; i<26; i++) vis[i] = 0;
	}
	int ans = 0;
	for(int i=0; i<26; i++)
	{
		if(cnt[i]==n) ans++;
	}
	cout<<ans<<endl;
}