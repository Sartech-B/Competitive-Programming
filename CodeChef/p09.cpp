#include <bits/stdc++.h>

using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, ans = 0;
		cin>>n;
		if(n==1 || n==2 || n==5 || n==10 || n==100)
		{
			cout<<1<<endl;
			continue;
		}
		if(n>100)
		{
			int a = (int)(n/100);
			ans += a;
			n -= a*100;
		}
		if(n>=50 && n!=0)
		{
			int a = (int)(n/50);
			ans += a;
			n -= a*50;
		}
		if(n>=10 && n!=0)
		{
			int a = (int)(n/10);
			ans += a;
			n -= a*10;
		}
		if(n>=5 && n!=0)
		{
			int a = (int)(n/5);
			ans += a;
			n -= a*5;
		}
		if(n>=2 && n!=0)
		{
			int a = (int)(n/2);
			ans += a;
			n -= a*2;
		}
		ans += n;
		cout<<ans<<endl;
	}
	return 0;
}