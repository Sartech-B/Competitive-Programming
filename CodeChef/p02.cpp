#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int arr[12];
	for(int t=0; t<12; t++)
	{
		arr[t] = pow(2, t);
	}
	int T;
	scanf("%d", &T);
	for(int tt=1; tt<=T; tt++)
	{
		int p;
		scanf("%d", &p);
		int opt[p+1], mx;
		opt[0] = 0;
		for(int i=0; i<12; i++)
		{
			if(arr[i]>p)
			{
				mx = i-1;
				break;
			}
		}
		for(int i=0; i<=mx; i++)
		{
			
		}
	}
	return 0;
}