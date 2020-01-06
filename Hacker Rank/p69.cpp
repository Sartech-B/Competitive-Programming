#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n], b[n], vis = n;
	bool cnt[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		cnt[i] = 0;
	}
	for(int i=0; i<n; i++) cin>>b[i];
	int ans = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(cnt[j] || a[i]!=b[j]) continue;
			ans++;
			vis--;
			cnt[j] = 1;
			break;
		}
	}
	if(vis<=0) ans--;
	else ans++;
	cout<<ans<<endl;
}