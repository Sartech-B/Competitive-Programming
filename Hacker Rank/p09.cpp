#include <bits/stdc++.h>

using namespace std;

int n, m, a1[20], a2[20], b1[20], b2[20];

int main()
{
	freopen("in", "r", stdin);
	
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0; i<n; i++) cin>>a1[i]>>a2[i];
		cin>>m;
		for(int i=0; i<m; i++) cin>>b1[i]>>b2[i];
		int dp[101];
		dp[100] = 0;
		for(int i=0; i<100; i++) dp[i] = -1;
		for(int i=99; i>=1; i++)
		{
			bool f = 0, f1 = 0;
			int a, b;
			for(int j=0; j<n; j++)
			{
				if(a1[j]==i)
				{
					f = 1;
					a = j;
					break;
				}
			}
			for(int j=0; j<m; j++)
			{
				if(b1[j]==i)
				{
					f1 = 1;
					b = j;
					break;
				}
			}
			//
		}
	}
}