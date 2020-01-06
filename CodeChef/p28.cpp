#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m, k;
		cin>>n>>m>>k;
		int diff = max(n, m)-min(n, m);
		if(diff<=k) cout<<0<<endl;
		else cout<<diff-k<<endl;
	}
	return 0;
}