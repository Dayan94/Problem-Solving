#include<stdio.h>

int main()
{
    short t = 0, i = 0, dust = 0;
    unsigned short n = 0;
    unsigned int sum = 0;
    scanf("%hd", &t);
    for(i = 1; i <= t; i = i + 1)
    {
        scanf("%hu", &n);
        sum = 0;
        while(n--)
        {
            scanf("%hd", &dust);
            if(dust > 0) sum += dust;
        }
        printf("Case %hd: %u\n", i, sum);
    }
    return 0;
}