#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	
	int T;
	cin>>T;
	for(int tt=1; tt<=T; tt++)
	{
		cout<<"Case #"<<tt<<": ";
		
		string s;
		cin>>s;
		int n = 0, x = s.length();
		for(int i=0; i<x; i++)
		{
			if(s[i]=='B') n++;
		}
		long long int i, j, c;
		int y, z, a = 0, b = 0;
		cin>>i>>j;
		y = i%x;
		if(!y) y = x;
		z = j%x;
		if(!y) z = x;
		for(int k=y-1; k<x; k++)
		{
			if(s[k]=='B') a++;
		}
		for(int k=0; k<z; k++)
		{
			if(s[k]=='B') b++;
		}
		c = n*(j-i+y-x-z)/x;
		cout<<a+b+c<<endl;
	}
}