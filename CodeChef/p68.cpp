#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, a, b;
		cin>>n>>a>>b;
		float n1 = 0, n2 = 0;
		for(int i=0; i<n; i++)
		{
			int v;
			cin>>v;
			if(v==a) n1++;
			if(v==b) n2++;
		}
		float ans = n1*n2/(n*n);
		printf("%.10f\n", ans);
	}
}