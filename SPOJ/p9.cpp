#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int ans = 0;
	for(int i=1; i*i<=n; i++) ans += (n/i)-i+1;
	cout<<ans<<endl;
}