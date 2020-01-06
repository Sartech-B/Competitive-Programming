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
		int n = 0;
		bool f = 0, s = 0, c = 0;
		for(int i=0; i<a.length(); i++)
		{
			if(a[i]=='1') n++;
			if(a[i]=='1' && f)
			{
				cout<<"NO"<<endl;
				c = 1;
				break;
			}
			else if(a[i]=='1' && !f)
			{
				s = 1;
			}
			else if(a[i]=='0' && s && !f)
			{
				f = 1;
			}
			else if(a[i]=='1' && s && !f && i==a.length()-1) f = 1;
		}
		if(!n) cout<<"NO"<<endl;
		else if(!c) cout<<"YES"<<endl;
	}
	return 0;
}                 