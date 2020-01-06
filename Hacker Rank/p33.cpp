#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	for(int x=1; x<=n; x++)
	{
		int j;
		for(int i=0; i<n; i++)
		{
			if(a[i]==x)
			{
				j = i+1;
				break;
			}
		}
		for(int i=0; i<n; i++)
		{
			if(a[i]==j)
			{
				cout<<i+1<<endl;
				break;
			}
		}
	}
}