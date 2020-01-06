#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, b, a, z, ans;
		cin>>n>>b;
		a = n%b;
		if(!a) a = b;
		z = n/a;
		ans = (n-a)*a/b;
		for(long long int i=2; i<=z; i++)
		{
			long long int c = i*a;
			long long int current = (n-c)*c/b;
			ans = max(ans, current);
		}
		/*for(long long int i=2; i<=z; i++)
		{
			long long int c = i*a;
			ans = max(ans, (n-c)*c/b);
		}*/
		cout<<ans<<endl;
	}
}