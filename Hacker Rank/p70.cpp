#include <bits/stdc++.h>

using namespace std;

int main()
{
	int p, d, m, s, sum = 0, ans = 0;
	cin>>p>>d>>m>>s;
	for(int i=p; ; i-=d)
	{
		if(i<m) i = m;
		sum += i;
		if(sum>s)
		{
			cout<<ans<<endl;
			break;
		}
		ans++;
	}
}