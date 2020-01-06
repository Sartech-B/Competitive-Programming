#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n, a, b, ans;
	cin>>n;
	a = (n-1)*(n+1);
	b = n*(n+2);
	if(n%2==0) ans = (b-a-1)/4;
	else ans = (a-b-1)/4;
	cout<<ans<<endl;
}