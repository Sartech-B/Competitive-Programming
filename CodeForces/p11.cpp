#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, ans;
	cin>>n>>m;
	ans = floor(m/2)*n;
	if(m%2!=0) ans += n/2;
	cout<<ans<<endl;
}