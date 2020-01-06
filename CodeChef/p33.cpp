#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m, x, y, l = 0;
		cin>>m>>x>>y;
		x *= y;
		int b[m], ans = 100;
		for(int i=0; i<m; i++) cin>>b[i];
		sort(b, b+m);
		for(int i=0; i<m; i++)
		{
			int a, bi;
			a = b[i]-x;
			if(a<=l) a = l+1;
			bi = b[i]+x;
			if(bi>100) bi = 100;
			l = bi;
			if(a>bi) continue;
			ans -= bi-a+1;
		}
		cout<<ans<<endl;
	}
	return 0;
}