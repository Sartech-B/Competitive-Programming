#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
	int n, k;
	cin>>n>>k;
	int k1 = k;
	long long int a[n], b[n], a1[n], b1[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		a1[i] = a[i];
	}
	for(int i=0; i<n; i++)
	{
		cin>>b[i];
		b1[i] = b[i];
	}
	sort(a, a+n);
	sort(b, b+n);
	sort(a1, a1+n);
	sort(b1, b1+n);
	long long int ans = a[n-1] + b[n-1];
	while(k-- && a[n-1]>b[0])
	{
		swap(a[n-1], b[0]);
		sort(a, a+n);
		sort(b, b+n);
	}
	
	while(k1-- && b1[n-1]>a1[0])
	{
		swap(b1[n-1], a1[0]);
		sort(a1, a1+n);
		sort(b1, b1+n);
	}
	
	ans = min(ans, min(a[n-1]+b[n-1], a1[n-1] + b1[n-1]));
	cout<<ans;
	return 0;
}