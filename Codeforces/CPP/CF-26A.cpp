#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
    int n,divisor=2,divisor2=0,dividant,quotient=0,c1=0,c2=0;
    while(scanf("%d",&n)==1)
    {
        while(n>5)
    {
       dividant=n;
       while(dividant!=1)
       {
           if(dividant%divisor==0)
        {
           quotient=dividant/divisor;
           dividant=quotient;
           if(divisor2!=divisor)
           {
               c1++;
           }
           divisor2=divisor;
        }
        else
        {
 
           divisor++;
        }
 
 
        if(c1==3)
        {
 
           break;
        }
 
       }
       if(c1==2)
       {
           c2++;
       }
       divisor2=0,divisor=2,quotient=0,c1=0;
       n--;
 
    }
    printf("%d\n",c2);
    c2=0;
    }
 
}