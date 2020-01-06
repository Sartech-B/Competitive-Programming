#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int a[40];
	a[0] = 1;
	for(int i=1; i<40; i++) a[i] = a[i-1]*2;
	long long int t;
	cin>>t;
	int j;
	for(int i=0; i<40; i++)
	{
		long long int v = 3*(a[i+1]-1);
		if(v>=t)
		{
			j = i;
			break;
		}
	}
	long long int ans = 3*a[j+1]-t-2;
	cout<<ans<<endl;
}