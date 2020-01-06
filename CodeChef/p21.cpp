#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int s;
		cin>>s;
		if(s<1500) cout<<s+(0.1*s)+(0.9*s)<<endl;
		else cout<<s+500+(0.98*s)<<endl;
	}
	return 0;
}