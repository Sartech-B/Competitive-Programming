#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m, cnt = 0;
		cin>>n>>m;
		for(int i=0; i<n; i++)
		{
			int v;
			cin>>v;
			if(v%m==0) cnt++;
		}
		long long int ans = pow(2, cnt)-1;
		cout<<ans<<endl;
	}
}