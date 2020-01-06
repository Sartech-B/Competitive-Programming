#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[9];
	for(int i=0; i<9; i++) cin>>a[i];
	int dp[8][9] = {{8, 1, 6, 3, 5, 7, 4, 9, 2}, {6, 1, 8, 7, 5, 3, 2, 9, 4},
         		{4, 3, 8, 9, 5, 1, 2, 7, 6}, {2, 7, 6, 9, 5, 1, 4, 3, 8},
         		{2, 9, 4, 7, 5, 3, 6, 1, 8}, {4, 9, 2, 3, 5, 7, 8, 1, 6},
         		{6, 7, 2, 1, 5, 9, 8, 3, 4}, {8, 3, 4, 1, 5, 9, 6, 7, 2}};
	int ans = 1000001;
	for(int i=0; i<8; i++)
	{
		int c = 0;
		for(int j=0; j<9; j++) c += abs(a[j]-dp[i][j]);
		ans = min(ans, c);
	}
	cout<<ans<<endl;
}