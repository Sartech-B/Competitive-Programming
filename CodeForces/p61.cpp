#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[100001];
	for(int i=0; i<100001; i++) a[i] = -1;
	for(int k=0; k<n; k++)
	{
		int x, y, ans = 0;
		cin>>x>>y;
		for(int i=1; i<=sqrt(x); i++)
		{
			if(x%i==0)
			{
				//check for unique sol
				if(a[i]==-1 || a[i]<k-y) ans++;
				//update
				a[i] = k;
				//check for unique sol
				if(a[x/i]==-1 || a[x/i]<k-y) ans++;
				//update
				a[x/i] = k;
			}
		}
		cout<<ans<<endl;
	}
}