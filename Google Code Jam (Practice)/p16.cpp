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
		
		int n, q;
		cin>>n>>q;
		int s[n], xm = 1000, ym, x = 0, y = 0, mx = 0;
		string a[n+1];
		for(int i=0; i<=n; i++) cin>>a[i];
		/*for(int i=0; i<n; i++)
		{
			int x = 0, y = 0;
			cin>>s[i];
			for(int j=0; j<q; j++)
			{
				if(a[i][j]==b[j]) x++;
				else y++;
			}
			if(x>s[i]) x = s[i];
			if(y>q-s[i]) y = q-s[i];
			ans = max(ans, x+y);
		}*/
		for(int i=0; i<n; i++)
		{
			cin>>s[i];
			xm = min(xm, s[i]);
			mx = max(mx, s[i]);
		}
		ym = q-mx;
		for(int i=0; i<q; i++)
		{
			bool cur = 1, cur1 = 0;
			char pre = a[0][i];
			for(int j=1; j<=n; j++)
			{
				if(a[j][i]!=pre)
				{
					cur = 0;
					break;
				}
			}
			for(int j=1; j<=n; j++)
			{
				if(a[j][i]==pre)
				{
					cur1 = 1;
					break;
				}
			}
			if(cur) x++;
			if(!cur1) y++;
		}
		//printf("\nxm: %d\nym: %d\nx: %d\ny: %d\n", xm, ym, x, y);
		if(x>xm) x = xm;
		if(y>ym) y = ym;
		cout<<x+y<<endl;
	}
}