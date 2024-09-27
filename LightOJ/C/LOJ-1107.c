#include<stdio.h>

int main()
{
    unsigned short t = 0, i = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 0, m = 0, x = 0, y = 0;
    scanf("%hd", &t);
    for(i = 1; i <= t; i++)
    {
        scanf("%hu%hu%hu%hu", &x1, &y1, &x2, &y2);
        printf("Case %hu:\n", i);
        scanf("%hu", &m);
        while(m--)
        {
            scanf("%hu%hu", &x, &y);
            if(x >= x1 && x <= x2 && y >= y1 && y <= y2) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}