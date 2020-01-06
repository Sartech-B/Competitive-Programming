#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n, k, a, b, ans, temp;
	cin>>n>>k;
	a = n/2, b = n/2;
	if(n%2==1) a++;
	if(k<=a) ans = 2*(k-1)+1;
	else
	{
		temp = k%a;
		if(!temp) temp = a;
		ans = 2*temp;
	}
	cout<<ans<<endl;
}