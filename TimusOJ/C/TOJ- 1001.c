#include <stdio.h>
#include <math.h>


int main()
{
    double total[256 * 1024];
    unsigned int i = 0;
    unsigned long long n = 0;
    while(scanf("%llu", &n) != EOF)
    {
        total[i++] = sqrt(n);
    }
    while(i--)
    {
        printf("%.4lf\n", total[i]);
    }
}