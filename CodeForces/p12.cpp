#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, ans = 0;
	cin>>n;
	while(n--)
	{
		int a, b, c, cnt = 0;
		cin>>a>>b>>c;
		if(a) cnt++;
		if(b) cnt++;
		if(c) cnt++;
		if(cnt>=2) ans++;
	}
	cout<<ans<<endl;
}