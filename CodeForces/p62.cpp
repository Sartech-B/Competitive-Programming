#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, ans = 1;
	cin>>n;
	string prev;
	cin>>prev;
	n--;
	while(n--)
	{
		string a;
		cin>>a;
		if(prev!=a) ans++;
		prev = a;
	}
	cout<<ans<<endl;
}