#include <bits/stdc++.h>

using namespace std;

int main()
{
	long int dp[15];
	dp[0] = 1;
	for(int i=1; i<15; i++) dp[i] = 5*dp[i-1];
	int t;
	cin>>t;
	while(t--)
	{
		int n, ans = 0;
		cin>>n;
		for(int i=1; i<14; i++) ans += (int)(n/dp[i]);
		cout<<ans<<endl;
	}
}