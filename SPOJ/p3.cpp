#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x, y;
		cin>>x>>y;
		if(x<y) cout<<"No Number"<<endl;
		else if(x%2==0 && y%2==0 && (x==y || x-2==y)) cout<<x+y<<endl;
		else if(x%2!=0 && y%2!=0 && (x==y || x-2==y)) cout<<x+y-1<<endl;
		else cout<<"No Number"<<endl;
	}
}