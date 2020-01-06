#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		int mx = 0;
		if(a.length()%2!=0)
		{
			cout<<"NO"<<endl;
			continue;
		}
		for(int i=0; i<a.length(); i++)
		{
			int c = 1;
			if(a[i]=='0') continue;
			for(int j=i+1; j<a.length(); j++)
			{
				if(a[j]=='0') continue;
				if(a[j]==a[i])
				{
					a[j] = '0';
					c++;
				}
			}
			a[i] = '0';
			mx = max(mx, c);
		}
		if(mx==a.length()/2) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}