#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,fact,num,div,k,i;
    char s[20];
    scanf("%d",&n);
    scanf("%s",s);
    k=strlen(s);
    fact=1;
    num=n;
    div=n/k;
    if(n%k!=0)
        div++;
    for(i=1;i<=div;i++)
    {
        fact=fact*n;
        n=n-k;
    }
    printf("%d\n",fact);

}