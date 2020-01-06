#include <bits/stdc++.h>

using namespace std;

int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		string a;
		cin>>a;
		int n = a.length(), ans = 0;
		for(int i=0; i<n/2; i++)
		{
			if(a[i]!=a[n-i-1]) ans += abs(a[i]-a[n-i-1]);
		}
		cout<<ans<<endl;
	}
}