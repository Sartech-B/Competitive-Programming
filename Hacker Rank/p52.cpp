#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	long int k;
	cin>>n>>k;
	long int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a, a+n);
	long int ans = 0, sum = 0;
	for(int i=0; i<n && a[i]<=k; i++)
	{
		sum += a[i];
		if(sum>k) break;
		ans++;
	}
	cout<<ans<<endl;
}