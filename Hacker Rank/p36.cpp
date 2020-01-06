#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	long int a[n], b[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		b[i] = a[i];
	}
	int ans1 = 0, ans2 = 0;
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i], a[j]);
				ans1++;
			}
		}
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(b[i]<b[j])
			{
				swap(b[i], b[j]);
				ans2++;
			}
		}
	}
	cout<<min(ans1, ans2)<<endl;
}