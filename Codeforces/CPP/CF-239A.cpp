#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,n,k,remainder,add;
    while(cin>>y>>k>>n)
    {
        remainder=y%k;
        add=k-remainder;
        if(add+y>n)
        {
            cout<<"-1\n";
        }
        else
        {

            x=0;
            while(add+y<=n)
            {
                x=add;
                add+=k;
                if(add+y<=n)
                cout<<x<<" ";
                else
                    cout<<x<<"\n";
            }
        }
    }
}

			 		 	 					 	    				 		 	