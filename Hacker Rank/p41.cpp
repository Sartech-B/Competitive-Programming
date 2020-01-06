#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cin>>n>>k;
	int ans = 0;
	for(int i=0; i<n; i++)
	{
		int v;
		cin>>v;
		if(v>k)
		{
			ans += v-k;
			k = v;
		}
	}
	cout<<ans<<endl;
}