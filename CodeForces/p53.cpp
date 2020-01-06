#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x, ans;
	cin>>x;
	int a[6];
	for(int i=5; i>=1; i--)
	{
		a[i] = x/i;
		x -= a[i]*i;
		ans += a[i];
	}
	cout<<ans<<endl;
}