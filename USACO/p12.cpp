/*
ID: sarthak16
PROG: crypt1
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

bool check(int, int, int, int, int, int*, int);

int main()
{
	freopen("crypt1.in", "r", stdin);
	freopen("crypt1.out", "w", stdout);
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	
	int ans = 0;
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			for(int k=0; k<n; k++)
			{
				for(int l=0; l<n; l++)
				{
					for(int m=0; m<n; m++)
					{
						if(check(a[i], a[j], a[k], a[l], a[m], a, n)) ans++;
					}
				}
			}
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}

bool check(int a, int b, int c, int d, int e, int *ai, int ni)
{
	int n = c+(b*10)+(a*100), p1 = n*e, p2 = n*d, c1 = 0;
	while(p1!=0)
	{
		c1++;
		int tmp = p1%10, f = 0;
		p1 /= 10;
		for(int i=0; i<ni; i++)
		{
			if(ai[i]==tmp)
			{
				f = 1;
				break;
			}
		}
		if(!f) return false;
	}
	if(c1>3) return false;
	c1 = 0;
	while(p2!=0)
	{
		c1++;
		int tmp = p2%10, f = 0;
		p2 /= 10;
		for(int i=0; i<ni; i++)
		{
			if(ai[i]==tmp)
			{
				f = 1;
				break;
			}
		}
		if(!f) return false;
	}
	if(c1>3) return false;
	int p = n*(e+(d*10));
	while(p!=0)
	{
		int tmp = p%10, f = 0;
		p /= 10;
		for(int i=0; i<ni; i++)
		{
			if(ai[i]==tmp)
			{
				f = 1;
				break;
			}
		}
		if(!f) return false;
	}
	return true;
}