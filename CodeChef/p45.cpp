#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m, a, b;
		cin>>n>>m;
		while(m--) cin>>a>>b;
		if(n%2==0) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
}