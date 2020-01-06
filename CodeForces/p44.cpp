#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n], p[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		p[a[i]-1] = i+1;
	}
	for(int i=0; i<n-1; i++) cout<<p[i]<<" ";
	cout<<p[n-1]<<endl;
}