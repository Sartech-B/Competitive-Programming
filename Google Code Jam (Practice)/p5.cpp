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
		
		string a, ans = "";
		char mx;
		bool mxd = 0;
		cin>>a;
		ans += a[0];
		for(int i=0; i<a.length(); i++) mx = max(mx, a[i]);
		for(int i=1; i<a.length(); i++)
		{
			if(a[i]==mx || (a[i]>=ans[0] && !mxd))
			{
				if(a[i]==mx) mxd = 1;
				string temp = "";
				temp += a[i];
				temp += ans;
				ans = temp;
			}
			else ans += a[i];
		}
		cout<<ans<<endl;
	}
}