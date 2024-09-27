#include<stdio.h>

int main()
{
    unsigned short h = 0, l = 0;
    scanf("%hu%hu", &h, &l);
    printf("%u %u", l - 1, h - 1);
}
