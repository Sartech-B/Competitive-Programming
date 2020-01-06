#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	int ans = 0;
	bool f = 1;
	for(int i=0; i<n-1; i++)
	{
		if(a[i]%2!=0)
		{
			a[i]++;
			a[i+1]++;
			ans += 2;
		}
	}
	if(a[n-1]%2==0) cout<<ans<<endl;
	else cout<<"NO"<<endl;
}