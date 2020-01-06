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
		
		int n;
		cin>>n;
		int a[n], ans, mx = 0;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			mx = max(mx, a[i]);
		}
		ans = mx;
		for(int i=1; i<mx; i++)
		{
			int c = 0;
			for(int j=0; j<n; j++)
			{
				if(i<a[j]) c += ceil((float)a[j]/i)-1;
			}
			ans = min(ans, c+i);
		}
		cout<<ans<<endl;
	}
}