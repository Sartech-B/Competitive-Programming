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
		long int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		int k, v;
		cin>>k;
		v = a[k-1];
		sort(a, a+n);
		int ans;
		for(int i=0; i<n; i++)
		{
			if(a[i]==v)
			{
				ans = i+1;
				break;
			}
		}
		cout<<ans<<endl;
	}
}