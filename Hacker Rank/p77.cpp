#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	int v = a[n-1], i = n-2;
	if(n==1) cout<<a[0]<<endl;
	bool f = 0;
	while(i>=0)
	{
		a[i+1] = a[i];
		if(a[i]<=v)
		{
			a[i+1] = v;
			for(int j=0; j<n; j++) cout<<a[j]<<" ";
			cout<<endl;
			f = 1;
			break;
		}
		for(int j=0; j<n; j++) cout<<a[j]<<" ";
		cout<<endl;
		i--;
	}
	if(!f && v<a[0])
	{
		a[0] = v;
		for(int i=0; i<n; i++) cout<<a[i]<<" ";
	}
}