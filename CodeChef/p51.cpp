#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, a, b, ans;
		cin>>a>>b>>n;
		if(n%2!=0) a *= 2;
		ans = max(a, b)/min(a, b);
		cout<<ans<<endl;
	}
}