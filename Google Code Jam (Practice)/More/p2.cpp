#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int v[n+1], opt[n+1];
	v[0] = 0;
	opt[0] = 0;
	for(int tt=1; tt<=n; tt++)
	{
		scanf("%d", &v[tt]);
	}
	opt[1] = v[1];
	for(int i=2; i<=n; i++)
	{
		int ans = 0;
		for(int j=1; j<i; j++)
		{
			ans = max(ans, v[j]+opt[i-j]);
		}
		ans = max(ans, v[i]);
		opt[i] = ans;
	}
	printf("%d\n", opt[n]);
	getch();
}