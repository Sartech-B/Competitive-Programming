#include <bits/stdc++.h>

using namespace std;

int main()
{
	long int dp[101];
	dp[0] = 0;
	dp[1] = 1;
	for(int i=2; i<101; i++) dp[i] = dp[i-1]+i*i;
	while(1)
	{
		int n;
		cin>>n;
		if(!n) break;
		cout<<dp[n]<<endl;
	}
}