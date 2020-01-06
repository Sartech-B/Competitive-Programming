#include <stdio.h>

#include "cs50.h"

int main(void)
{
    int y;
    scanf("%d", &y);
    if(y%400==0 || y%4==0)
        printf("Leap Year");
    else
        printf("Not Leap Year");
}