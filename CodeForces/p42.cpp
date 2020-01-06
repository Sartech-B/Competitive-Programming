#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a, b;
	cin>>a>>b;
	bool f = 0;
	int n = a.length();
	for(int i=0; i<n; i++)
	{
		if(a[i]!=b[n-i-1])
		{
			f = 1;
			cout<<"NO"<<endl;
			break;
		}
	}
	if(!f) cout<<"YES"<<endl;
}