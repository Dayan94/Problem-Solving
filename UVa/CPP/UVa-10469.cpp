#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n1,n2,i,a,b,c,sum;
    while(cin>>n1)
    {
        cin>>n2;
        i=0,sum=0;
        while(n1!=0||n2!=0)
        {
            a=n1%2;
            b=n2%2;
            n1=n1/2;
            n2=n2/2;
            if(a+b==2)
                c=0;
            else
                c=a+b;
            sum+=c*pow(2,i);
            i++;
        }
        cout<<sum<<endl;
    }
}
