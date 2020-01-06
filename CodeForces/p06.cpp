#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, ans = 0;
	cin>>n>>k;
	k--;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(a[i]>0 && i<=k) ans++;
		else if(a[i]>0 && i>k && a[i]==a[k]) ans++;
	}
	cout<<ans<<endl;
}