#include <bits/stdc++.h>

using namespace std;

int main()
{
	int dp[10000];
	dp[0] = 0;
	for(int i=1; i<10000; i++) dp[i] = dp[i-1] + i;
	int t;
	cin>>t;
	while(t--)
	{
		int b;
		cin>>b;
		if(b==1 || b==2 || b==3)
		{
			cout<<0<<endl;
			continue;
		}
		if(b%2!=0) b--;
		cout<<dp[(b/2)-1]<<endl;
	}
	return 0;
}