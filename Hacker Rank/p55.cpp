#include <bits/stdc++.h>

using namespace std;

typedef long int ll;

vector<ll> *a;

int main()
{
	int n, q;
	ll ans = 0;
	cin>>n>>q;
	a = new vector<ll>[n];
	while(q--)
	{
		ll x, y;
		int t;
		cin>>t>>x>>y;
		if(t==1) a[(x^ans)%n].push_back(y);
		else
		{
			ans = a[(x^ans)%n][(y%(a[(x^ans)%n].size()))];
			cout<<ans<<endl;
		}
	}
}