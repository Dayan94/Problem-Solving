#include<stdio.h>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<stack>
#include<queue>
#include<string.h>
int flag[40],prime[40],prime_no=0;
void seive()
{
    int i,j;
    for(i=2;i<40;i++)
    {
        flag[i]=1;
    }
    int lim=sqrt(40)+1;
    for(i=2;i<=lim;i++)
    {
        if(flag[i]==1)
        {
           for(j=i+i;j<40;j+=i)
            {
                flag[j]=0;
            }
        }
    }
    prime_no = 0;
    for(i=0;i<40;i++)
    {
        if(flag[i]==1)
        {
            prime[prime_no]=i;
            prime_no++;
        }
    }
}

int main()
{
    seive();
    int n,i;
    long long p;
    while(scanf("%d",&n)==1&& n!=0)
    {
        if(n==2||n==3||n==5||n==7||n==13||n==17||n==19||n==31)
        {
            p=pow(2,n-1)*(pow(2,n)-1);
            printf("Perfect: %llu!\n",p);
        }
        else
        {
            for(i=0;i<prime_no;i++)
            {
                if(n==prime[i])
                {
                    printf("Given number is prime. But, NO perfect number is available.\n");
                    break;
                }
            }
            if(i==prime_no)
            {
                printf("Given number is NOT prime! NO perfect number is available.\n");
            }
        }
    }
}
