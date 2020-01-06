#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int t[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &t[i]);
    }
    int p[n];
    for(int i=0; i<n; i++)
    {
    	if(t[i]%k==0)
    	{
    		p[i] = t[i]/k;
    	}
    	else
    	{
    		p[i] = (t[i]/k) + 1;
    	}
    }
    int pgn = 0;
    for(int i=0; i<n; i++)
    {
    	for(int j=0; j<p[i]; j++)
    	{
    		// Count page index
    		pgn++;
    		
    	}
    }
    getch();
    return 0;
}