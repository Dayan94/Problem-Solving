#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,l,r,ol=0,cl=0,oR=0,cR=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>l>>r;
        if(l==0)
        {
            cl++;
        }
        else
        {
            ol++;
        }
        if(r==0)
        {
            cR++;
        }
        else
        {
            oR++;
        }
    }
    if(ol<=cl)
    {
        l=ol;
    }
    else
    {
        l=cl;
    }
    if(oR<=cR)
    {
        r=oR;
    }
    else
    {
        r=cR;
    }
    cout<<r+l<<"\n";
}

		     	  			 		 			 	 	 	 	 		