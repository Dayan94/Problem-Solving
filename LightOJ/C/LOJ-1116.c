#include<stdio.h>

int main()
{
    unsigned long long t = 0, i = 0, m = 0;
    unsigned long long w = 0;
    scanf("%llu", &t);
    for(i = 1; i <= t; i++)
    {
        scanf("%llu", &w);
        printf("Case %llu: ", i);
        m = 1;
        if(w % 2 != 0) printf("Impossible\n");
        else
        {
           while(w % 2 == 0)
           {
               w /= 2;
               m *= 2;
           }
           printf("%llu %llu\n", w, m);
        }

    }
    return 0;
}