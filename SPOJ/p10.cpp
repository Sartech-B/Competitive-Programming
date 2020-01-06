#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a, b;
		cin>>a>>b;
		int dp[5];
		dp[0] = 1;
		dp[1] = a;
		dp[2] = a*a;
		dp[3] = dp[2]*a;
		dp[4] = dp[3]*a;
		if(b==0) cout<<1<<endl;
		else if(!a || a==1) cout<<a<<endl;
		else
		{
			int i = b%4;
			if(!i) i = 4;
			cout<<dp[i]%10<<endl;
		}
	}
}