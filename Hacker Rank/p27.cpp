#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	long long int n = 0, k, ans = 0;
	cin>>a>>k;
	for(int i=0; i<a.length(); i++) n += a[i]-'0';
	long long int p = n*k;
	for(int i=0; i<=100000; i++)
	{
		while(p)
		{
			int d = p%10;
			ans += d;
			p /= 10;
		}
		if(ans<=9) break;
		p = ans;
		ans = 0;
	}
	cout<<ans<<endl;
}