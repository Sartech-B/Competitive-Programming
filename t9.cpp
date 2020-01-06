#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	long int k;
	cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a, a+n);
	int i = n-2, j = n-1;
	long long int ans = 0;
	while(i<j && i>=0)
	{
		if(a[j]-a[i]>=k)
		{
			ans += i+1;
			j--;
			i = j-1;
		}
		else i--;
	}
	cout<<ans;
	return 0;
}