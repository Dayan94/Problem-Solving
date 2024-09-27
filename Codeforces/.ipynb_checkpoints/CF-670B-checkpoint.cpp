#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i,ans,pos1,pos2,a[100010];
    while(scanf("%lld%lld",&n,&k)==2)
    {
        ans=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            pos1=(i+1)*(i+2)/2;
            pos2=(i+2)*(i+3)/2;
            if(k>pos1&&k<pos2)
            {
                ans=k-pos1-1;
            }
            if(k==pos1)
            {
                ans=i;
            }
 
        }
        printf("%lld\n",a[ans]);
    }
    return 0;
}