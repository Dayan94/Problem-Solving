#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y,i,j,c;
    //ios_base::sync_with_stdio(false);
    while(scanf("%d",&x)==1)
    {
        scanf("%d%d%d",&y,&a,&b);
        c=0;
        for(i=a;i<=x;i++)
        {
            for(j=b;j<=y;j++)
            {
                if(i>j)
                {
                    c++;
                }
            }
        }
        cout<<c<<"\n";
        for(i=a;i<=x;i++)
        {
            for(j=b;j<=y;j++)
            {
                if(i>j)
                {
                    cout<<i<<" "<<j<<"\n";
                }
            }
        }
    }
}

	 	  				  						 		 	 	 	 			