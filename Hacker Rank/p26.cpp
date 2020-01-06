#include <bits/stdc++.h>

using namespace std;

long int f(int, int, int);

int main()
{
	int x, n;
	cin>>x>>n;
	long int ans = 0;
	for(int i=1; pow(i, n)<=x; i++) ans += f(x, n, i);
	cout<<ans<<endl;
}

long int f(int x, int n, int m)
{
	long int res = 0, dpow = x-pow(m, n);
	if(dpow==0) return 1;
	else if(dpow<0) return 0;
	for(int i=m+1; pow(i, n)<=dpow; i++)
	{
		long int d = f(dpow, n, i);
		res += d;
	}
	return res;
}