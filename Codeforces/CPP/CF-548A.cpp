#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);

     int l,k,m,p,n,flag=1;
      string s;
        cin>>s;
        l=s.size();
        cin>>k;
        if(l%k!=0)
        {
            cout<<"NO\n";
        }
        else
        {
             m=l/k;
             p=m,n=1;
             for(int i=0,j=0;i<l;i++,j++)
        {

            if(s[i]!=s[p-j-1])
            {
                cout<<"NO\n";
                flag=0;
                break;
            }
            if(j==m/2)
            {
                n++;
                i=p-1;
                p=m*n;
                j=-1;
            }
        }
        if(flag==1)
        cout<<"YES\n";
        }

}


	 		 			 	  	 					     	   	 	