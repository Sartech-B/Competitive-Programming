#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int k, n, w, ans;
	cin>>k>>n>>w;
	ans = (k*w*(w+1)/2)-n;
	if(ans<0) ans = 0;
	cout<<ans<<endl;
}