#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int64_t n,a[1010],M=1000003;
    a[0]=1;
    a[1]=1;
    a[2]=3;
    for(int i=3;i<1010;i++)
    {
        a[i]=(a[i-1]*3)%M;
    }
    while(cin>>n)
    {
        cout<<a[n]<<"\n";
    }
}
