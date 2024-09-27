#include<stdio.h>
#include<math.h>
int main()
{
    short t = 0, i = 0;
    double r = 0, area = 0;
    scanf("%hd", &t);
    for(i = 1; i <= t; i++)
    {
        scanf("%lf", &r);
        area = 4 * r * r - 2 * acos(0) * r * r;
        printf("Case %hd: %.2lf\n", i, area);
    }
    return 0;
}