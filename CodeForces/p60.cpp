#include <bits/stdc++.h>

using namespace std;

bool f(int, int, int, int, int, int);

int main()
{
	int n, a, b, ans = 0;
	cin>>n>>a>>b;
	int arr[n][2];
	for(int i=0; i<n; i++) cin>>arr[i][0]>>arr[i][1];
	if(n==1)
	{
		cout<<0<<endl;
		return 0;
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(f(a, b, arr[i][0], arr[i][1], arr[j][0], arr[j][1])) ans = max(ans, arr[i][0]*arr[i][1]+arr[j][0]*arr[j][1]);
		}
	}
	cout<<ans<<endl;
}

bool f(int a, int b, int xi, int yi, int xj, int yj)
{
	bool f = 0;
	if(xi+xj<=a || yi+yj<=b) f = 1;
	if(xi+yj<=a || yi+xj<=b) f = 1;
	if(xi+xj<=b || yi+yj<=a) f = 1;
	if(xi+yj<=b || yi+xj<=a) f = 1;
	if(f && (xi*yi+xj*yj)<=a*b) return 1;
	return 0;
}	