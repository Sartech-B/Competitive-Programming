#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int ans = 0, cnt = 1;
	string a;
	cin>>a;
	char prev = a[0];
	for(int i=1; i<n; i++)
	{
		if(a[i]==prev) cnt++;
		else
		{
			prev = a[i];
			ans += cnt-1;
			cnt = 1;
		}
	}
	ans += cnt-1;
	cout<<ans<<endl;
}