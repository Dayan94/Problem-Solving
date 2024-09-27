#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    string s;
    int l,c,ans,r;
    while(cin>>s)
    {
        l=s.length();
        c=0;
        ans=1;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='4'||s[i]=='7')
            {
                c++;
            }
        }
        ans=1;
        if(c==0)
            ans=0;
        else {
           while(c!=0)
        {
            r=c%10;
            if(r!=7&&r!=4)
            {
                ans=0;
                break;
            }
            c/=10;
        }
        }

        if(ans==1)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
}
