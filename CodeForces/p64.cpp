#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll f(ll, ll);

int main()
{
	ll a, b;
	cin>>a>>b;
	cout<<f(a, b)<<endl;
}

ll f(ll a, ll b)
{
	if(b==1) return a;
	if(!a) return 0;
	if(a>b)
	{
		ll n = a/b;
		if(n*b==a) n--;
		return f(a-n*b, b)+n;
	}
	else
	{
		ll n = (b/a);
		if(n*a==b) n--;
		return f(a, b-n*a)+n;
	}
}