#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
   char w[500],c=0;
   int l,i,sum,j;
   while(gets(w))
   {
       c++;
       if(c==EOF)
        break;
       l=strlen(w);
       sum=0;
       for(i=0;i<l;i++)
       {
           if(w[i]<='z'&&w[i]>='a')
            sum+=(w[i]-'a'+1);
           else if(w[i]<='Z'&&w[i]>='A')
            sum+=(w[i]-'A'+27);
       }
       int flag[sum];
       for(i=1;i<=sum;i++)
       {
        flag[i]=true;
       }
        int lim=sqrt(sum)+1;
        for(i=2;i<=lim;i++)
        {
           if(flag[i]==true)
           {
              for(j=i+i;j<=sum;j+=i)
              {
                flag[j]=false;

              }
          }
       }
       if(flag[sum]==true)
        printf("It is a prime word.\n");
       else
        printf("It is not a prime word.\n");
   }
}
