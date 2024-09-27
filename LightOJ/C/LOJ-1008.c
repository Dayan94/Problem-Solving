#include <stdio.h>
#include<math.h>
int main()
{
    unsigned short t = 0, i = 0;
    unsigned long long int s = 0, sec_where_row_col_same = 0;
    unsigned long long int N = 0, shift = 0;

    scanf("%hu", &t);

    for (i = 1; i <= t; i++)
    {
        scanf("%llu", &s);
        printf("Case %d: ", i);
        if(sqrt(s) != floor(sqrt(s))) N = sqrt(s) + 1;
        else N = sqrt(s);
        sec_where_row_col_same = N * N;
        sec_where_row_col_same = sec_where_row_col_same - N + 1;
        if(s == sec_where_row_col_same) printf("%llu %llu\n", N, N);
        else
        {
            if(s > sec_where_row_col_same) shift = s - sec_where_row_col_same;
            else shift = sec_where_row_col_same - s;

            shift = N - shift;

            if((int) N%2 == 0)
            {
                if(s > sec_where_row_col_same) printf("%llu %llu\n", N, shift);
                else printf("%llu %llu\n", shift, N);
            }
            else
            {
                if(s > sec_where_row_col_same) printf("%llu %llu\n", shift, N);
                else printf("%llu %llu\n", N, shift);
            }
        }
    }
    return 0;
}