#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	long int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a, a+n);
	long int mn = abs(a[0]-a[1]);
	for(int i=1; i<n-1; i++) mn = min(mn, abs(a[i]-a[i+1]));
	cout<<mn<<endl;
}