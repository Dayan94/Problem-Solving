#include<stdio.h>

int main()
{
    unsigned short n = 0, a = 0, b = 0;
    scanf("%hu %hu %hu", &n, &a, &b);
    printf("%d", n * a * b * 2);
}
