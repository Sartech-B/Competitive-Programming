#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;
	int a[m], ans = 1000000;
	for(int i=0; i<m; i++) cin>>a[i];
	sort(a, a+m);
	for(int i=m-1; i-n+1>=0; i--) ans = min(ans, a[i]-a[i-n+1]);
	cout<<ans<<endl;
}