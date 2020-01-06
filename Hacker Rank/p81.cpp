#include <bits/stdc++.h>

using namespace std;

int a[100];

void set_zero()
{
	for(int i=0; i<100; i++) a[i] = 0;
}

int main()
{
	set_zero();
	int n, k;
	cin>>n>>k;
	for(int i=0; i<n; i++)
	{
		int v;
		cin>>v;
		v = v%k;
		a[v]++;
	}
	int ans = min(1, a[0])+(k%2==0 ? min(1, a[k/2]) : 0);
	for(int i=1; i<=k/2; i++)
	{
		if(i!=k-i) ans += max(a[i], a[k-i]);
	}
	cout<<ans<<endl;
}