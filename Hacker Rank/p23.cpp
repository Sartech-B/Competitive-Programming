#include <bits/stdc++.h>

using namespace std;

int f(int);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n], mn = -1;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			mn = (mn==-1 ? a[i] : min(mn, a[i]));
		}
		int ans = -1;
		for(int j=0; j<=5; j++)
		{
			int sum = 0;
			for(int i=0; i<n; i++)
			{
				int temp = abs(a[i]-(mn-j));
				sum += f(temp);
			}
			ans = (ans==-1 ? sum : min(ans, sum));
		}
		cout<<ans<<endl;
	}
}

int f(int x)
{
	return ((int)x/5)+((int)(x%5)/2)+(x%5)%2;
}