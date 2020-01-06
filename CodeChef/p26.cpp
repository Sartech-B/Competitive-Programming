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
		int l = 0, r = 0;
		for(int i=0; i<a.length(); i++)
		{
			if(a[i]!='?' && b[i]!='?' && a[i]!=b[i]) l++;
			if(a[i]=='?' || b[i]=='?') r++;
		}
		cout<<l<<" "<<l+r<<endl;
	}
	return 0;
}