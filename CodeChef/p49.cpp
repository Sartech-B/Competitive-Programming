#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		int n = a.length();
		int p[n+1], ans = 1, cnt = 1;
		p[0] = 1;
		for(int i=1; i<=n; i++)
		{
			/*int c = 0;
			switch(a[i-1])
			{
				case '>': c--;
					break;
				case '<': c++;
					break;
				case '=': c = 0;
					break;
			}
			p[i] = p[i-1]+c;*/
			p[i] = p[i-1];
			if(a[i-1]=='>')  p[i]--;
			else if(a[i-1]=='<') p[i]++;
			cnt = min(cnt, p[i]);
			ans = max(ans, p[i]);
		}
		int cng;
		if(cnt<=0) cng = 1-cnt;
		else cng = 0;
		ans += cng;
		cout<<ans<<endl;
	}
}