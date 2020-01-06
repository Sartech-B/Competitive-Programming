#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int ans;
	double n, m, a;
	cin>>n>>m>>a;
	ans = ceil(n/a)*ceil(m/a);
	cout<<ans<<endl;
}