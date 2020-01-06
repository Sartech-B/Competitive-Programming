#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n], ts = 0, s = 0, ans = 0;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		ts += a[i];
	}
	sort(a, a+n);
	for(int i=n-1; i>=0; i--)
	{
		s += a[i];
		if(s>ts-s)
		{
			ans = n-i;
			break;
		}
	}
	cout<<ans<<endl;
}