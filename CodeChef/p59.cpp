#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float n, h;
		cin>>n;
		h = (sqrt(1+8*n)-1)/2;
		int ans = floor(h);
		cout<<ans<<endl;
	}
}