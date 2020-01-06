#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n, x, y;
	cin>>n>>x>>y;
	if((y==n && x>y) || (n>y))
	{
		cout<<-1<<endl;
		return 0;
	}
	else if(y==n && x<=y)
	{
		while(n--) cout<<1<<endl;
		return 0;
	}
	long long int v = y-n+1, v2 = v*v;
	if(v2+n-1>=x)
	{
		cout<<v<<endl;
		n--;
		while(n--) cout<<1<<endl;
	}
	else cout<<-1<<endl;
}