#include <bits/stdc++.h>

using namespace std;

long int pw(long int, long int, long int);

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	
	int T;
	cin>>T;
	for(int tt=1; tt<=T; tt++)
	{
		cout<<"Case #"<<tt<<": ";
		
		long int a, n, p;
		cin>>a>>n>>p;
		long int ans = a%p;
		for(long int i=2; i<=n; i++) ans = pw(ans, i, p);
		cout<<ans<<endl;
	}
}

long int pw(long int a, long int n, long int p)
{
	if(n==0) return 1;
	if(n==1) return a%p;
	
	long int power = pw(a, n/2, p)%p;
	power = (power*power)%p;
	if(n%2==0) return power;
	else return (power*a)%p;
}