/* Insertion Sort - Increasing Order */
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=1; i<n; i++)
	{
		int key = a[i];
		int j;
		for(j=i-1; j>=0 && a[j]>key; j--) a[j+1] = a[j];
		a[j+1] = key;
	}
	for(int i=0; i<n; i++) cout<<a[i]<<endl;
	return 0;
}