#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,x,s=0,i;
    while(x!=0)
    {
      cin>>n;
      x=n;
      if(x==0)
        break;
      else
        s++;
      int a[n];
      int m=0,sum=0,av=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    av=sum/n;
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]<av)
        {
            while(a[i]!=av)
            {
                a[i]++;
                m++;
            }
        }
        else
            break;
    }
    cout<<"Set #"<<s<<"\n"<<"The minimum number of moves is "<<m<<"."<<endl<<endl;
    }
}
