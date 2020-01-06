#include <bits/stdc++.h>

using namespace std;

int n(string);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		cout<<n(a)<<endl;
	}
	return 0;
}

int n(string a)
{
	int ans = 0;
	for(int i=0; i<a.length(); i++)
	{
		if(a[i]=='4') ans++;
	}
	return ans;
}