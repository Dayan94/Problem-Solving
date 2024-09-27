#include<stdio.h>
#include<math.h>
int main()
{
    unsigned short t = 0, i = 0, a = 0, b = 0, c = 0;
    scanf("%hu", &t);
    for(i = 1; i <= t; i++)
    {
        scanf("%hu%hu%hu", &a, &b, &c);
        printf("Case %hu: ", i);
        if(a > b)
        {
            if(a > c)
            {
                if( a * a == b * b + c * c) printf("yes\n");
                else printf("no\n");
            }
            else
            {
                if( c * c == b * b + a * a) printf("yes\n");
                else printf("no\n");

            }
        }
        else
        {
            if(b > c)
            {
                if( b * b == a * a + c * c) printf("yes\n");
                else printf("no\n");
            }
            else
            {
                if( c * c == b * b + a * a) printf("yes\n");
                else printf("no\n");

            }
        }
    }
    return 0;
}