#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a, b;
		cin>>a>>b;
		bool f = 0;
		for(int i=0; i<a.length(); i++)
		{
			if(a[i]!=b[i] && a[i]!='?' && b[i]!='?')
			{
				cout<<"No"<<endl;
				f = 1;
				break;
			}
		}
		if(!f) cout<<"Yes"<<endl;
	}
	return 0;
}