#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	while(n!=0)
	{
		int a[n+1], b[n+1];
		a[0] = 0;
		b[0] = 0;
		for(int i=1; i<=n; i++)
		{
			scanf("%d", &a[i]);
			b[a[i]] = i;
		}
		int same = 1;
		for(int i=1; i<=n; i++)
		{
			if(a[i]!=b[i])
			{
				same = 0;
				break;
			}
		}
	
		printf("%s\n", (same) ? "ambiguous" : "not ambiguous");
		scanf("%d", &n);
	}
	
	return 0;
}