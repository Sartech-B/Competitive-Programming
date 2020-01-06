#include <bits/stdc++.h>

using namespace std;

int main()
{
	int l, r, ans = 0;
	cin>>l>>r;
	for(int i=l; i<=r; i++)
	{
		for(int j=l; j<=r; j++) ans = max(ans, i^j);
	}
	cout<<ans<<endl;
}