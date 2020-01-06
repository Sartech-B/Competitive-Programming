#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		a[i] += i+1;
		if(i!=0) a[i] = max(a[i], a[i-1]);
	}
	cout<<a[n-1]<<" ";
	int k = 1;
	for(int i=n-1; i>0; i--)
	{
		a[i] -= n;
		if(i!=n-1) a[i] = max(a[i], a[i+1]);
		a[i]++;
		a[i-1] += k;
		k++;
		cout<<max(a[i-1], a[i])<<" ";
	}
	cout<<endl;
	return 0;
}