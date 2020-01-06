#include <bits/stdc++.h>

using namespace std;

long long int m;

long long int fact(int);

int main()
{
	//freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	
	int T;
	cin>>T;
	for(int tt=1; tt<=T; tt++)
	{
		cout<<"Case #"<<tt<<": ";
		
		long long int n, ans = 0;
		cin>>n>>m;
		for(int i=n; i>=1; i--)
		{
			long long int p = 1;
			for(int j=i+1; j<=n; j++)
			{
				p *= (fact(j)-1)/fact(j-1);
				//p %= m;
				//if(!p) p = m;
			}
			ans += p*i*i;
			//ans %= m;
			//if(!ans) ans = m;
		}
		ans %= m;
		if(!ans) ans = m;
		cout<<ans<<endl;
	}
}

long long int fact(int n)
{
	if(!n) return 1;
	long long int ret = 1;
	for(int i=2; i<=n; i++)
	{
		ret *= i;
		//ret %= m;
		//if(!ret) ret = m;
	}
	return ret;
}