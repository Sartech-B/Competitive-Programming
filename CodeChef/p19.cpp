#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int p, q;
		cin>>q>>p;
		double ans = p*q;
		if(q>1000) ans *= 0.9;
		printf("%.6lf\n", ans);
	}
	return 0;
}