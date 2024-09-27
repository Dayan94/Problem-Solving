#include<stdio.h>
#include<math.h>
int main()
{
    short t = 0, i = 0, n = 0;
    double R = 0, r = 0, angle = 0;
    scanf("%hd", &t);
    for(i = 1; i <= t; i++)
    {
        scanf("%lf%hd", &R, &n);
        angle = acos(-1) / n;
        r = R * sin(angle) / (1 + sin(angle));
        printf("Case %hd: %.10lf\n", i, r);
    }
    return 0;
}