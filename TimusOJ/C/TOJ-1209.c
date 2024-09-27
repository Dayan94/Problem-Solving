#include<stdio.h>

int main()
{
    unsigned short n = 0;
    unsigned int k = 0, natural_num = 0;

    scanf("%hu", &n);

    while(n--)
    {
        scanf("%u", &k);
        natural_num = sqrt((k-1) * 2);

        if(natural_num * (natural_num + 1) / 2 + 1 == k) printf("1");
        else printf("0");
        
        if(n) printf(" ");
    }

    return 0;
}