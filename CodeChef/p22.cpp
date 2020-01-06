#include <bits/stdc++.h>

using namespace std;

bool pal(int);

int main()
{
	bool dp[100001];
	dp[0] = 0;
	for(int i=1; i<100001; i++) dp[i] = pal(i);
	int t;
	cin>>t;
	while(t--)
	{
		int l, r;
		cin>>l>>r;
		long int ans = 0;
		for(int i=l; i<=r; i++)
		{
			if(dp[i]) ans += i;
		}
		cout<<ans<<endl;
	}
	return 0;
}

bool pal(int n)
{
	string a = "";
	while(n!=0)
	{
		int t = n%10;
		n /= 10;
		a += t+'0';
	}
	int i = 0, j = a.length()-1;
	while(i<j)
	{
		if(a[i]!=a[j]) return 0;
		i++;
		j--;
	}
	return 1;
}