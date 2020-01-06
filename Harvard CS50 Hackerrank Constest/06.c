#include <stdio.h>

#include "cs50.h"

int main(void)
{
    int n;
    scanf("%d", &n);
    if(n>2 && n<24 && n%2!=0)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==0 || i==n-1 || j==0 || j==n-1)
                    printf("*");
                else if(i==j || j==(n-i-1))
                    printf("*");
                else
                    printf(" ");
                if(j==n-1)
                    printf("\n");

            }
        }
    }
}