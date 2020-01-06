/*
ID: sarthak16
PROG: milk
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

typedef struct node
{
	int p, a;
}units;

int main()
{
	freopen("milk.in", "r", stdin);
	freopen("milk.out", "w", stdout);
	
	int n, m;
	scanf("%d %d", &n, &m);
	
	units f[m];
	
	for(int i=0; i<m; i++)
	{
		scanf("%d %d", &f[i].p, &f[i].a);
	}
	
	for(int i=0; i<m-1; i++)
	{
		for(int j=i+1; j<m; j++)
		{
			if(f[i].p > f[j].p)
			{
				units temp = f[i];
				f[i] = f[j];
				f[j] = temp;
			}
		}
	}
	
	int ans = 0;
	
	for(int i=0; i<m; i++)
	{
		if(f[i].a <= n)
		{
			ans += f[i].p * f[i].a;
			n -= f[i].a;
		}
		else
		{
			ans += f[i].p * n;
			n -= n;
			break;
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}