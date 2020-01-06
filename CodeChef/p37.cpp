#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen("out", "w", stdout);
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		bool b[a.length()];
		int ans = 0;
		while(1){
			bool c = 0;
			for(int i=0; i<a.length(); i++)
			{
				if(b[i])
				{
					b[i] = 0;
					continue;
				}
				for(int j=i+1; j<a.length() && j<=i+(a[i]-'0'); j++)
				{
					if(a[i]>a[j] && a[i]-a[j]>=j-i)
					{
						a[j] = a[i];
						b[j] = 1;
						c = 1;
					}
				}
				for(int j=i-1; j>=0 && j>=i-(a[i]-'0'); j--)
				{
					if(a[i]>a[j] && a[i]-a[j]>=i-j)
					{
						a[j] = a[i];
						c = 1;
					}
				}
			}
			if(c) ans++;
			else
			{
				bool f = 0;
				char init = a[0];
				for(int j=1; j<a.length(); j++)
				{
					if(a[j]==init) init = a[j];
					else
					{
						f = 1;
						break;
					}
				}
				if(!f) break;
			}
			cout<<a<<endl;
		}
		cout<<ans<<endl;
	}
	return 0;
}