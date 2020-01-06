#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string a;
		cin>>a;
		bool s = 0, f = 1;
		for(int i=0; i<n; i++)
		{
			if(a[i]=='H')
			{
				if(s)
				{
					f = 0;
					break;
				}
				s = 1;
			}
			if(a[i]=='T')
			{
				if(!s)
				{
					f = 0;
					break;
				}
				s = 0;
			}
		}
		if(s) f = 0;
		if(f) cout<<"Valid"<<endl;
		else cout<<"Invalid"<<endl;
	}
}