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
		int n = a.length();
		if(n>10) cout<<a[0]<<n-2<<a[n-1]<<endl;
		else cout<<a<<endl;
	}
}