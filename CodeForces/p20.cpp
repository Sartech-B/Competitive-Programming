#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, temp;
	cin>>n;
	int a[5], ans = 0;
	a[0] = 0;
	a[1] = 0;
	a[2] = 0;
	a[3] = 0;
	a[4] = 0;
	for(int i=0; i<n; i++)
	{
		int v;
		cin>>v;
		a[v]++;
	}
	ans = a[4];
	if(a[2]%2==0)
	{
		ans += a[2]/2;
		a[2] = 0;
	}
	else
	{
		ans += (a[2]-1)/2;
		a[2] = 1;
	}
	temp = min(a[1], a[3]);
	ans += temp;
	a[1] -= temp;
	a[3] -= temp;
	if(a[1]!=0)
	{
		ans += floor(a[1]/4);
		a[1] -= floor(a[1]/4)*4;
	}
	if(a[1]!=1)
	{
		a[a[1]]++;
		a[1] = 0;
	}
	if(a[2]%2==0)
	{
		ans += a[2]/2;
		a[2] = 0;
	}
	else
	{
		ans += (a[2]-1)/2;
		a[2] = 1;
	}
	temp = min(a[1], a[2]);
	ans += temp;
	a[1] -= temp;
	a[2] -= temp;
	ans += a[1]+a[2]+a[3];
	cout<<ans<<endl;
}