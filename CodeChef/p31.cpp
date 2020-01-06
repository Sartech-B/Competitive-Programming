#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		cin>>n>>m;
		int d = 1;
		if(n==m)
		{
			cout<<1<<endl;
			continue;
		}
		long long unsigned int ans;
		for(int i=min(n, m); i>=2; i--)
		{
			if(n%i==0 && m%i==0)
			{
				d = i;
				break;
			}
		}
		ans = m*n/(d*d);
		cout<<ans<<endl;
	}
	return 0;
}