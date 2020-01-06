#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string a;
	cin>>a;
	int prev = -1, type = -1, ans = 0;
	bool f = 0;
	for(int i=0; i<n; i++)
	{
		if(a[i]!='.')
		{
			f = 1;
			if(prev==-1)
			{
				if(a[i]=='L') type = 0;
				else
				{
					ans += i;
					type = 1;
				}
			}
			else
			{
				if(type==0)
				{
					if(a[i]=='L') type = 0;
					else
					{
						ans += i-prev-1;
						type = 1;
					}
				}
				else
				{
					if(a[i]=='L')
					{
						if((i-prev)%2==0) ans++;
						type = 0;
					}
					else type = 1;
				}
			}
			prev = i;
		}
	}
	if(type==0) ans += n-1-prev;
	if(!f) ans = n;
	cout<<ans<<endl;
}