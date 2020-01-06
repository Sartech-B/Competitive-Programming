#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string a;
	cin>>a;
	string b = "";
	bool v[1000];
	for(int i=0; i<1000; i++) v[i] = 0;
	for(int i=0; i<n; i++)
	{
		if(!v[a[i]])
		{
			b += a[i];
			v[a[i]] = 1;
		}
	}
	int ans = 0;
	int m = b.length();
	for(int i=0; i<m-1; i++)
	{
		for(int j=i+1; j<m; j++)
		{
			int cnt = 0;
			char cur;
			for(int k=0; k<n; k++)
			{
				if(a[k]==b[i] || a[k]==b[j])
				{
					cur = a[k];
					break;
				}
			}
			bool f = 1;
			for(int k=0; k<n; k++)
			{
				if(a[k]==cur)
				{
					cur = (cur==b[i] ? b[j] : b[i]);
					cnt++;
				}
				else if(a[k]==b[i] || a[k]==b[j])
				{
					f = 0;
					break;
				}
			}
			if(f) ans = max(ans, cnt);
		}
	}
	cout<<ans<<endl;
}