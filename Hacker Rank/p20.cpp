#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	cin>>a;
	int q, n = a.length();
	cin>>q;
	char prev = a[0];
	int j = 1, cnt[26];
	for(int i=0; i<26; i++) cnt[i] = 0;
	for(int i=1; i<n; i++)
	{
		if(a[i]!=prev)
		{
			cnt[prev-'a'] = max(cnt[prev-'a'], j);
			prev = a[i];
			j = 1;
		}
		else j++;
	}
	cnt[prev-'a'] = max(cnt[prev-'a'], j);
	while(q--)
	{
		long int x;
		cin>>x;
		bool f = 0;
		for(int i=0; i<26; i++)
		{
			if(x%(i+1)==0 && cnt[i]*(i+1)>=x)
			{
				f = 1;
				break;
			}
		}
		if(!f) cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
}