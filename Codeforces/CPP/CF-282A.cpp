#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    while(cin>>t)
    {
        int c=0;
        string s;
        while(t--)
        {
            cin>>s;
            if(s[1]=='+')
                c++;
            else
                c--;
        }
        cout<<c<<endl;
    }
 
}