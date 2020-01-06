#include <bits/stdc++.h>

using namespace std;

typedef long int ll;

int main()
{
	ll n, m, mx = 0;
	cin>>n>>m;
	vector<pair<pair<ll, ll>, ll> > a;
	ll t = n;
	while(t--) a.push_back(0);
	while(m--)
	{
		ll a1, b, k;
		cin>>a1>>b>>k;
		a.push_back(make_pair(make_pair(a1, b), k));
	}
	cout<<mx<<endl;
}