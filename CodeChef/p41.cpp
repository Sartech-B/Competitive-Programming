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
		int a[2*n];
		for(int i=0; i<2*n; i++) cin>>a[i];
		int mx = 0, p, mp = n;
		for(int i=0; i<2*n; i++)
		{
			if(a[i]>mx)
			{
				mx = a[i];
				p = i;
			}
		}
		swap(a[p], a[mp]);
		cout<<mx<<endl;
		for(int i=0; i<2*n-1; i++) cout<<a[i]<<" ";
		cout<<a[2*n-1]<<endl;
	}
}