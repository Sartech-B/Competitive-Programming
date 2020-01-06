#include <bits/stdc++.h>

using namespace std;

long int n(long long int);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a, b;
		cin>>a>>b;
		if(a==b)
		{
			cout<<0<<endl;
			continue;
		}
		if(b==1 && a==0)
		{
			cout<<1<<endl;
			continue;
		}
		if(b==1 || b==0)
		{
			cout<<-1<<endl;
			continue;
		}
		long int n1 = n(a), n2 = n(b-1), ans = 1;
		if(n1<n2) ans += n2-n1;
		else if(n1>n2) ans += 1;
		cout<<ans<<endl;
	}
}

long int n(long long int a)
{
	string ret = "";
	long int cnt = 0;
	while(a)
	{
		if(a%2!=0)
		{
			ret = "1"+ret;
			cnt++;
		}
		else ret = "0"+ret;
		a /= 2;
	}
	return cnt;
}