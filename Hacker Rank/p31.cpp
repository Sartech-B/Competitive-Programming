#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cin>>n>>k;
	int a[n], a1[n], curr = 0, p = 1, ans = 0;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		a1[i] = a[i];
	}
	for(int i=1; curr<n; i++)
	{
		if(i>=p && i<=min(p+k-1, a[curr])) ans++;
		a1[curr] -= k;
		p += k;
		if(a1[curr]<=0)
		{
			curr++;
			p = 1;
		}
	}
	cout<<ans<<endl;
}