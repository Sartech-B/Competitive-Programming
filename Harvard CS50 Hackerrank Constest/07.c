#include <stdio.h>
#include <string.h>

#include "cs50.h"

int main(void)
{
    string s;
    s = GetString();
    
    int n = strlen(s);
    
    int j=0, k=0;
    
    for(int i=0; i<n; i++)
    {
        if(s[i]<'0' || (s[i]>'9' && s[i]<'A') || (s[i]>'Z' && s[i]<'a') || s[i]>'z')
        {
            k = i-1;
            
            while(j<k)
            {
                char temp = s[j];
                s[j] = s[k];
                s[k] = temp;
                j++;
                k--;
            }
            j = i+1;
        }
        else if(i==n-1)
        {
            k = i;
            
            while(j<k)
            {
                char temp = s[j];
                s[j] = s[k];
                s[k] = temp;
                j++;
                k--;
            }
            
        }
    }
    printf("%s", s);
}
