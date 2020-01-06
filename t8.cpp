#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
	int n, k;
	cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a, a+n);
	int j;
	for(int i=n-1; i>0; i--)
	{
		if(a[i]+a[0]<k)
		{
			j = i;
			break;
		}
	}
	int i = 0;
	long long int ans = 0;
	while(i<j)
	{
		if(a[i]+a[j]<k)
		{
			ans += j-i;
			i++;
		}
		else
			j--;
	}
	cout<<ans;
	return 0;
}