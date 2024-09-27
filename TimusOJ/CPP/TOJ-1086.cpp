#include<stdio.h>
#include<math.h>
#include<stdint.h>


using namespace std;

#define MAX 163841
uint16_t prime_no;
bool flag[MAX];
uint32_t prime[MAX];

void seive()
{
    uint16_t l=sqrt(MAX)+1;
    uint32_t i, j;

    for(i=2;i<=l;i++)
    {
        if(flag[i] == false)
        {
            for(j=i+i;j<=MAX;j+=i)
                flag[j] = true;
        }

    }
    for(i=2;i<=MAX;i++)
    {
        if(flag[i] == false)
            prime[prime_no++]=i;
    }
}

int main()
{
    unsigned int k;

    seive();
    // printf("%u ", prime[prime_no-1]);

    // for(uint16_t i = 0; i < prime_no; i++)
    // {
    //     printf("%u ", prime[i]);
    // }

    scanf("%u",&k);
    uint16_t total_n[k];
    while(k--)
    {
        scanf("%hu",&total_n[k]);
    }
    k = sizeof(total_n) / sizeof(total_n[0]);
    while(k--)
    {
        printf("%u\n",prime[total_n[k]-1]);
    }
}