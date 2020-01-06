#include <bits/stdc++.h>

using namespace std;

long int dp1[100001];

long int dp(long int);

int main()
{
	//for(int i=0; i<100001; i++) dp1[i] = -1;
	dp1[0] = 0;
	dp1[1] = 1;
	dp1[2] = 2;
	dp1[3] = 3;
	dp1[4] = 4;
	dp1[5] = 5;
	for(long int i=6; i<100001; i++) dp1[i] = max(i, dp1[i/2]+dp1[i/3]+dp1[i/4]);
	int t = 10;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<dp(n)<<endl;
	}
}

long int dp(long int n)
{
	if(n<100001) return dp1[n];
	return max(n, dp(n/2)+dp(n/3)+dp(n/4));
}