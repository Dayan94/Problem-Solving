#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,starting,ending,breakwhile=0;
    string s;
    while(cin>>n)
    {
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='.')
                continue;
            if(s[i]=='R')
            {
                starting=i+1;
                while(i++)
                {
                    if(s[i]=='L')
                    {
                        ending=i;
                        breakwhile=1;
                        break;
                    }
                    if(s[i]=='.')
                    {
                        ending=i+1;
                        breakwhile=1;
                        break;
                    }
                }
            }
            if(breakwhile==1)
            {
                break;
            }
            if(s[i]=='L')
            {
                starting=i+1;
                ending=i;
                break;
            }
        }
        cout<<starting<<" "<<ending<<"\n";

    }

}
