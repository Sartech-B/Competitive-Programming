#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int mn = 90000000;
		for(int i=0; i<n; i++)
		{
			long long int v;
			cin>>v;
			mn = min(mn, v);
		}
		mn *= n-1;
		cout<<mn<<endl;
	}
	return 0;
}