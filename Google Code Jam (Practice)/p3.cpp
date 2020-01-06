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
		
		int n, ans;
		cin>>n;
		for(int i=2; i>0; i++)
		{
			long long int req = 0;
			int j = 1;
			while(req<n-1)
			{
				req += pow(i, j);
				j++;
			}
			if(req==n-1)
			{
				ans = i;
				break;
			}
		}
		cout<<ans<<endl;
	}
}