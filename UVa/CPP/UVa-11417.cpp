#include<iostream>
#include<stdio.h>
using namespace std;
int GCD(int a,int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main()
{
    int t=100,n,i,j,G;
    while(t--)
    {
        cin>>n;
        if(n==0)
            break;
        G=0;
        for(i=1;i<n;i++)
            for(j=i+1;j<=n;j++)
                {
                    G+=GCD(i,j);
                }
        cout<<G<<endl;
    }
}
