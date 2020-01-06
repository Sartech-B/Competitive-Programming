#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int b, l;
		cin>>b>>l;
		double a = sqrt(b*b + l*l), b1 = sqrt(l*l - b*b);
		printf("%lf %lf\n", min(a, b1), max(a, b1));
	}
	return 0;
}