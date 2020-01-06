#include <stdio.h>
#include <string.h>

#include "cs50.h"

int main(void)
{
    char a[305];

    scanf("%[^/n]", a);
    
    int len = strlen(a);
    
    for(int i=0; i<len; i++)
    {
        if(a[i]==',')
        {
            for(int j=len-1; j>=i+1; j--)
            {
                if(j==i+1)
                {
                    a[i+2] = a[i+1];
                    a[i+1] = ' ';
                }
                else
                {
                    a[j+1] = a[j];
                }
            }
            len++;
        }
        else if(a[i]=='.')
        {
            for(int j=len-1; j>=i+1; j--)
            {
                if(j==i+1)
                {
                    a[i+2] = a[i+1];
                    a[i+1] = ' ';
                }
                else
                {
                    a[j+1] = a[j];
                }
            }
            len++;
            if(a[i+2]>='a' && a[i+2]<='z')
                a[i+2] = a[i+2] - 32;
        }
    }
    for(int i=0; i<len; i++)
        printf("%c", a[i]);
}
