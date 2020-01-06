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
		int a[2*n], ans;
		for(int i=0; i<2*n; i++) cin>>a[i];
		sort(a, a+(2*n));
		ans = a[(3*n-1)/2];
		cout<<ans<<endl;
		int cnt = 1;
		for(int i=n; i<2*n-1; i++)
		{
			swap(a[cnt], a[i]);
			cnt += 2;
		}
		for(int i=0; i<2*n; i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}