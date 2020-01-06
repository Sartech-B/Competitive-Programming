#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	int T;
	scanf("%d", &T);
	for(int tt=1; tt<=T; tt++)
	{
		printf("Case #%d: ", tt);
		
		int e, r, n;
		scanf("%d %d %d", &e, &r, &n);
		int v[n];
		for(int t=0; t<n; t++)
			scanf("%d", &v[t]);
			
		int opt[n+1];
		opt[0] = 0;
		for(int i=0; i<n; i++)
		{
			int avail = e;
			for(int j=0; j<=e; j++)
			{
				
			}
		}
	}
}