#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int b, w, x, y, z;
		cin>>b>>w>>x>>y>>z;
		long long int ans = (b+w)*x+w*z;
		ans = min(ans, (b+w)*y+b*z);
		ans = min(ans, b*x+w*y);
		cout<<ans<<endl;
	}
}