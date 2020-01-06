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
		
		string a, res = "";
		cin>>a;
		int n = a.length();
		bool f = 0;
		for(int i=0; i<n; i++) res += '0';
		res[1] = a[0];
		res[n-2] = a[n-1];
		for(int k=0; k<n; k++)
		{
			for(int i=0; i<n; i++)
			{
				if(res[i]!='0' && i<n-2 && res[i+2]=='0')
				{
					int x, y = res[i]-'A', z = a[i+1]-'A', tmp, tmp1;
					tmp = z-y;
					tmp1 = z-y+26;
					if(tmp>=0 && tmp<=25 && tmp1>=0 && tmp1<=25) continue;
					x = z-y;
					if(x<0) x += 26;
					res[i+2] = x+'A';
				}
				else if(res[i]!='0' && i>=2 && res[i-2]=='0')
				{
					int x, y = res[i]-'A', z = a[i-1]-'A', tmp, tmp1;
					tmp = z-y;
					tmp1 = z-y+26;
					if(tmp>=0 && tmp<=25 && tmp1>=0 && tmp1<=25) continue;
					x = z-y;
					if(x<0) x += 26;
					res[i-2] = x+'A';
				}
			}
		}
		for(int i=0; i<n; i++)
		{
			if(res[i]=='0')
			{
				f = 1;
				cout<<"AMBIGUOUS"<<endl;
				break;
			}
		}
		if(!f) cout<<res<<endl;
	}
}