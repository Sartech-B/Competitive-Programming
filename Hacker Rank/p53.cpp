#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	long int ans = 0;
	sort(a, a+n);
	int i = n-1, t = 1;
	while(i>=0)
	{
		for(int j=0; j<k && i>=0; j++)
		{
			ans += t*a[i];
			i--;
		}
		t++;
	}
	cout<<ans<<endl;
}