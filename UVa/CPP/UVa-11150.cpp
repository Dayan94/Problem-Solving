#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int N;
    while(scanf("%d",&N)==1)
    {
        int sum=N,f,t,r;
            f=N/3,r=N%3,t;
            if(N==2)
                    sum++;
            while(f>0)
            {
                t=f+r;
                if(t==2)
                    t++;
                sum+=f;
                f=t/3;
                r=t%3;
            }
            cout<<sum<<"\n";
        }
}

