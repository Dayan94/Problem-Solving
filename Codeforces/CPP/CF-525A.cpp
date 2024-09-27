#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,l,i,c,al['z'+1];
    string s;
    while(cin>>n)
    {
        cin>>s;
        l=s.length();
        c=0;
        for(i='a';i<='z';i++)
        {
            al[i]=0;
        }
        for(i=0;i<l;i+=2)
        {
            if(s[i]!=tolower(s[i+1]))
            {
                if(al[tolower(s[i+1])]>0)
                {
                    al[tolower(s[i+1])]--;
                    al[s[i]]++;
                }
                else
                {
                    c++;
                    al[s[i]]++;
                }
            }
        }
        cout<<c<<"\n";
    }
}

	  	    	 										 		 		    	