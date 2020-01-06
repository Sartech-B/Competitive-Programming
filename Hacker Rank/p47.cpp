#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string a[n], ans[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		ans[i] = a[i];
	}
	for(int i=1; i<n-1; i++)
	{
		for(int j=1; j<n-1; j++)
		{
			if(a[i][j]>a[i-1][j] && a[i][j]>a[i+1][j] && a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1]) ans[i][j] = 'X';
		}
	}
	for(int i=0; i<n; i++) cout<<ans[i]<<endl;
}