#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, x = 100000, y = 500, min_x = 100000, min_y = 500, max_x = 0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		int tx, ty;
		cin>>tx>>ty;
		min_x = min(min_x, tx);
		max_x = max(max_x, tx);
		min_y = min(min_y, ty);
	}
	cout<<max(min_x*y, max(min_y*x, (x-max_x)*y));
	return 0;
}
