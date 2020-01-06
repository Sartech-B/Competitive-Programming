#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, ans = 0, s = 0;
	cin>>n;
	while(n--)
	{
		int a, b;
		cin>>a>>b;
		s += b-a;
		ans = max(ans, s);
	}
	cout<<ans<<endl;
}