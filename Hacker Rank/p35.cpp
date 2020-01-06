#include <bits/stdc++.h>

using namespace std;

int main()
{
	int s, n, m;
	cin>>s>>n>>m;
	int a[n], b[m], ans = 0;
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<m; i++) cin>>b[i];
	sort(a, a+n);
	sort(b, b+m);
	if(a[0]+b[0]>s) cout<<-1<<endl;
	else
	{
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++) ans = max(ans, (a[i]+b[j]<=s ? a[i]+b[j] : ans));
		}
		cout<<ans<<endl;
	}
}