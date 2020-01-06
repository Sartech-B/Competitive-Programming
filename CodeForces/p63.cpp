#include <bits/stdc++.h>

using namespace std;

int main()
{
	long int a[3], sum = 0;
	cin>>a[0]>>a[1]>>a[2];
	sum = a[0]+a[1]+a[2];
	long int n[3];
	n[0] = (sum-2*a[2])/2;
	n[1] = (sum-2*a[0])/2;
	n[2] = (sum-2*a[1])/2;
	if((n[0]<0 || n[1]<0 || n[2]<0) || (n[0]+n[2]!=a[0] || n[0]+n[1]!=a[1] || n[1]+n[2]!=a[2])) cout<<"Impossible"<<endl;
	else cout<<n[0]<<" "<<n[1]<<" "<<n[2]<<endl;
}