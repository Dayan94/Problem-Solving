#include<stdio.h>
#include<iostream>
#include<stdint.h>

using namespace std;
int main()
{
    uint64_t  m1,m,f,t;
    int i,n;
    while(cin>>n)
    {
        if(n==-1)
            break;
        i=0,m=0,f=0;
        while(i<=n)
        {
            m1=f;
            f=m+1;
            m=m+m1;
            t=m+f;
            i++;
        }
        cout<<m<<" "<<t<<endl;
    }
}
