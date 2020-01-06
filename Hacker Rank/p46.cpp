#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, c, m;
		cin>>n>>c>>m;
		int x = n/c, cnt = 0;
		cnt += x;
		while(x>=m)
		{
			int tmp = x/m;
			cnt += tmp;
			x -= tmp*m-tmp;
		}
		cout<<cnt<<endl;
	}
}