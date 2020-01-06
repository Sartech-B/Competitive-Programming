#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, mx = 0;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			mx = max(a[i], mx);
		}
		bool ans = 0;
		while(!ans)
		{
			for(int i=0; i<n; i++)
			{
				if(a[i]%mx==0 && i==n-1) ans = 1;
				else if(a[i]%mx!=0)
				{
					mx--;
					break;
				}
			}
			if(ans || !mx) break;
		}
		if(!mx) mx = 1;
		cout<<a[0]/mx;
		for(int i=1; i<n; i++) cout<<" "<<a[i]/mx;
		cout<<endl;
	}
	return 0;
}