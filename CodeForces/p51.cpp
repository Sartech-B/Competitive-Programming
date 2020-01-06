#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n], mx = 0, mn = 10000, mxi = -1, mni = -1, ans;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		mx = max(mx, a[i]);
		mn = min(mn, a[i]);
	}
	for(int i=0; i<n; i++)
	{
		if(a[i]==mx)
		{
			if(mxi==-1) mxi = i;
			else mxi = min(mxi, i);
		}
		if(a[i]==mn)
		{
			if(mni==-1) mni = i;
			else mni = max(mni, i);
		}
	}
	if(mni<mxi) mni++;
	ans = mxi+n-1-mni;
	cout<<ans<<endl;
}