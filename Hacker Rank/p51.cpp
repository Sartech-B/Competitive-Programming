#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a, a+n);
	int ans = 0;
	for(int i=0; i<n; i++)
	{
		ans++;
		int j;
		for(j=i+1; j<n; j++)
		{
			if(a[j]>a[i]+4) break;
		}
		i = j-1;
	}
	cout<<ans<<endl;
}