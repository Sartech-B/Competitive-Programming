#include <stdio.h>

#include "cs50.h"

int main(void)
{
    double b, r, ans;
    int n;
    //scanf("%lf %lf %lf", &b, &r, &n);
    b = GetDouble();
    r = GetDouble();
    n = GetInt();
    ans = b * (1 + r * n);
    printf("%.2lf", ans);
}
