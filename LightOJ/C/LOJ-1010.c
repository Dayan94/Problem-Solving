#include<stdio.h>
#include<stdint.h>

int main()
{
    unsigned short t = 0, i = 0, m = 0, n = 0;
    scanf("%hu", &t);
    for(i = 1; i <= t; i++)
    {
        scanf("%hu %hu", &m, &n);
        printf("Case %hu: ", i);
        if(m == 1) printf("%hu", n);
        else if(n == 1) printf("%hu", m);
        else if(m == 2 && n == 2) printf("4");
        else if(n == 2)
        {
            if(m % 4 == 0) printf("%hu", m);
            else if(m % 4 == 1 || m % 4 == 3) printf("%hu", m + 1);
            else if(m % 4 == 2) printf("%hu", m + 2);

        }
        else if(m == 2)
        {
            if(n % 4 == 0) printf("%hu", n);
            else if(n % 4 == 1 || n % 4 == 3) printf("%hu", n + 1);
            else if(n % 4 == 2) printf("%hu", n + 2);

        }
        else
        {
            if(m % 2 != 0 && n % 2 != 0) printf("%hu", m * n / 2 + 1);
            else printf("%hu", m * n / 2);
        }
        printf("\n");
    }
    return 0;
}