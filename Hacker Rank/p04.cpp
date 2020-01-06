#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	long long int ans = 0;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a, a+n);
	for(int i=0; i<n-1; i++)
	{
		ans += a[i];
		ans *= 2;
	}
	ans += a[n-1];
	cout<<ans<<endl;
}