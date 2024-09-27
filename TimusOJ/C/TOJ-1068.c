#include<stdio.h>

int main()
{
    int n = 0, sum = 0;
    scanf("%d", &n);
    if(n < 0)
    {
        sum = -1 * n;
        sum = sum * (sum + 1) / 2 - 1;
        sum = -1 * sum;
        printf("%d", sum);
    }
    else
    {
        sum = n * (n + 1) / 2;
        if(sum == 0)
            printf("1");
        else
            printf("%d", sum);
    }
}