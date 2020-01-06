#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	
	int T;
	cin>>T;
	for(int tt=1; tt<=T; tt++)
	{
		cout<<"Case #"<<tt<<": ";
		
		long long int l, r;
		cin>>l>>r;
		l = min(l, r);
		r = l*(l+1)/2;
		cout<<r<<endl;
	}
}