#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1; i<=n; i++) cin>>a[i];
	a[0] = -10001;
	for(int i=2; i<=n; i++)
	{
		int v = a[i], j = i-1;
		while(j>=0 && v<a[j])
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = v;
		for(int i=1; i<=n; i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}