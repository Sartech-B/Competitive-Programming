#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
	while(TRUE)
	{
		long long int n;
		scanf("%lld", &n);
		for(long long int i=0; i<n; i++)
		{
			for(long long int j=0; j<n; j++)
			{
				if(i==0 || i==n-1)
					printf("%c", (i==0)?'-':'-');
				else if(j==0 || j==n-1)
					printf("%c", (j==0)?'|':'\\');
				else if(i==j || j==(n-i-1))
					printf("*");
				else if(i==((int)n/2))
					printf("_");
				else if(j==((int)n/2))
					printf("|");
				else
					printf(" ");
					
				if(j==n-1)
					printf("\t=>\t%lld\n", i+1);
			}
		}
	}
}