#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, q;
	cin>>n;
	string a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	cin>>q;
	while(q--)
	{
		string b;
		cin>>b;
		int ans = 0;
		for(int i=0; i<n; i++)
		{
			if(a[i]==b) ans++;
		}
		cout<<ans<<endl;
	}
}