#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	long int x = 4294967295;
	while(t--)
	{
		long int n, ans;
		cin>>n;
		ans = x-n;
		cout<<ans<<endl;
	}
}