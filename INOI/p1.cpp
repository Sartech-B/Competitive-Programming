#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

typedef struct node
{
	int f, s;
}tri;

bool cmp(tri one, tri other)
{
	return one.s<other.s;
}

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	int n;
	cin>>n;
	tri a[n];
	long long int ans = 0;
	for(int i=0; i<n; i++)
	{
		cin>>a[i].f;
		int p;
		cin>>a[i].s>>p;
		a[i].s += p;
	}
	sort(a, a+n, cmp);
	
	ans = a[0].f+a[0].s;
	
	for(int i=1; i<n; i++)
	{
		if(ans>=a[i].s) ans += a[i].f;
		else ans = a[i].f + a[i].s;
	}
	
	cout<<ans;
	
	return 0;
}
