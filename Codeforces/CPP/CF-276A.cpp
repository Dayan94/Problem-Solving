#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int64_t n,k,f,t,max_joy;
    while(cin>>n>>k)
    {
        max_joy=0;
        for(int i=0;i<n;i++)
        {
            cin>>f>>t;
            if(t>k)
            {
                f=f-(t-k);
            }
            if(max_joy<f||i==0)
            {
                max_joy=f;
            }
        }
        cout<<max_joy<<"\n";
    }
}
