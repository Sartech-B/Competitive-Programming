#include <stdio.h>
#include <stdlib.h>

int cmp(const void*, const void*);

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		char a1[n][n];
		int a[n][n];
		for(int i=0; i<n; i++) scanf("%s", a1[i]);
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++) a[i][j] = a1[i][j];
			qsort(a[i], n, sizeof(int), cmp);
		}
		int f = 0;
		for(int j=0; j<n; j++)
		{
			for(int i=0; i<n-1; i++)
			{
				if(a[i][j]>a[i+1][j])
				{
					f = 1;
					break;
				}
			}
			if(f) break;
		}
		if(f) printf("NO\n");
		else printf("YES\n");
	}
}

int cmp(const void *p, const void *q) 
{
	int a = * (int *) p;
	int b = * (int *) q;
	return (a>b ? 1 : (a==b ? 0 : -1));
}