#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int l,c;
    while(getline(cin,s))
    {
        l=s.size();
        c=0;
        for(int i=l-1;s[i]=='?'||s[i]==' ';i--)
        {
            if(s[i-1]=='a'||s[i-1]=='e'||s[i-1]=='i'||s[i-1]=='o'||s[i-1]=='u'||s[i-1]=='A'||s[i-1]=='E'||s[i-1]=='I'||s[i-1]=='O'||s[i-1]=='U'||s[i-1]=='y'||s[i-1]=='Y')
            {
                cout<<"YES\n";
                c=1;
                break;
            }
        }
        if(c==0)
        {
            cout<<"NO\n";
        }
    }
}
