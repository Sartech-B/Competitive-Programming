#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long int s[n];
		for(int i=0; i<n; i++) cin>>s[i];
		sort(s, s+n);
		long mn = 1000000000;
		for(int i=0; i<n-1; i++) mn = min(mn, s[i+1]-s[i]);
		cout<<mn<<endl;
	}
}