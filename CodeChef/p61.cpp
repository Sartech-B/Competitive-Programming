#include <bits/stdc++.h>

using namespace std;

long int gcd(long int, long int);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		long int k;
		cin>>n>>k;
		long int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		bool f = 0;
		if(n==1) cout<<(a[0]==1 ? "YES" : "NO")<<endl;
		else
		{
			int ans = gcd(a[0], a[1]);
			for(int i=2; i<n; i++) ans = gcd(ans, a[i]);
			if(ans<=k) cout<<"YES"<<endl;
			else
			{
				if(gcd(ans, k)==1) cout<<"NO"<<endl;
				else cout<<"YES"<<endl;
			}
		}
	}
}

long int gcd(long int a, long int b)
{
    if(!a) return b;
    return gcd(b%a, a);
}