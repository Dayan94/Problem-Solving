#include<stdio.h>

int main()
{
    unsigned short t = 0, i = 0, your_position = 0, lift_position = 0, times = 0;
    scanf("%hu", &t);
    for(i = 1; i <= t; i++)
    {
        scanf("%hu%hu", &your_position, &lift_position);
        if(your_position > lift_position) times = 4 * (your_position - lift_position + your_position) + 3 * 3 + 5 * 2;
        else times = 4 * lift_position + 3 * 3 + 5 * 2;
        printf("Case %hu: %hu\n", i, times);
    }
    return 0;
}