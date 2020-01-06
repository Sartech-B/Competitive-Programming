#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		bool f = 0;
		for(int i=2; i<=n/2; i++)
		{
			if(n%i==0)
			{
				f = 1;
				cout<<"no"<<endl;
				break;
			}
		}
		if(!f) cout<<"yes"<<endl;
	}
	return 0;
}