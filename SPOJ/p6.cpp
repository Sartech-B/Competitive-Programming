#include <bits/stdc++.h>

using namespace std;

int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if(n==-1) break;
		int a[n], d = 0, e;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			d += a[i];
		}
		if(d%n!=0)
		{
			cout<<-1<<endl;
			continue;
		}
		e = d/n;
		d = 0;
		for(int i=0; i<n; i++)
		{
			if(a[i]<e) d += e-a[i];
		}
		cout<<d<<endl;
	}
}