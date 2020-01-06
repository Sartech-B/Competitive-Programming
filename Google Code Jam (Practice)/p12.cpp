#include <bits/stdc++.h>

using namespace std;

bool isPal(long long int);

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	
	vector<long long int> pre;
	for(long long int i=1; i<=10000000; i++)
	{
		if(isPal(i) && isPal(i*i)) pre.push_back(i);
	}
	
	int T;
	cin>>T;
	for(int tt=1; tt<=T; tt++)
	{
		cout<<"Case #"<<tt<<": ";
		
		long long int a, b;
		cin>>a>>b;
		int ans = 0;
		for(vector<long long int>::iterator it=pre.begin(); it!=pre.end(); it++)
		{
			long long int v = *it;
			v *= v;
			if(v>=a && v<=b) ans++;
		}
		cout<<ans<<endl;
	}
}

bool isPal(long long int n)
{
	string a = "", b;
	while(n!=0)
	{
		a += n%10+'0';
		n /= 10;
	}
	b = a;
	reverse(b.begin(), b.end());
	if(a==b) return 1;
	return 0;
}