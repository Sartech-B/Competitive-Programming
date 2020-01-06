#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

long int n, m;

ll power(int, long int);
ll p(long int);

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	cin>>n>>m;
	ll a = power(2, n), b = p(n);
	if(a>b) cout<<(a-b)%m;
	else cout<<a-b+m;
}

ll power(int a, long int b)
{
	ll ret = 1;
	while(b--)
	{
		ret *= a;
		ret = ret%m;
	}
	return ret;
}

ll p(long int a)
{
	ll ret = 0;
	if(a==1) return 0;
	if(a==2) return 2;
	if(a==3) return 2;
	for(long int i=2; i<=a/2; i++)
	{
		if(a%i==0)
		{ 
			ret += power(2, i)-p(i);
			ret = ret%m;
		}
	}
	return ret+2;
}