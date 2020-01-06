#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, cnt = 0;
		string a;
		cin>>n>>a;
		if(n==1)
		{
			if(a[0]=='_') cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
			continue;
		}
		int tmp[26];
		for(int i=0; i<26; i++) tmp[i] = 0;
		for(int i=0; i<n; i++)
		{
			if(a[i]=='_') cnt++;
			else tmp[a[i]-'A']++;
		}
		bool f = 1;
		for(int i=0; i<26; i++)
		{
			if(tmp[i]==1)
			{
				f = 0;
				break;
			}
		}
		if(f && cnt==0)
		{
			for(int i=1; i<n-1; i++)
			{
				if(a[i]!='_' && (a[i-1]!=a[i] && a[i+1]!=a[i]))
				{
					f = 0;
					break;
				}
			}
			if(a[0]!='_' && a[0]!=a[1]) f = 0;
			if(a[n-1]!='_' && a[n-1]!=a[n-2]) f = 0;
		}
		if(f) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}