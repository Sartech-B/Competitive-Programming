#include <bits/stdc++.h>

using namespace std;

int main()
{
	string names[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	long long int a[29];
	a[0] = 5;
	for(int i=1; i<29; i++) a[i] = a[i-1]+5*pow(2, i);
	long long int n, ans;
	cin>>n;
	if(n<=5) ans = n-1;
	else
	{
		int x = lower_bound(a, a+29, n)-a;
		ans = (n-a[x-1]-1)/pow(2, x);
	}
	cout<<names[ans]<<endl;
}