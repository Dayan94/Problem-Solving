#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int r,c,count;
    while(cin>>r>>c)
    {
        char ar1[r][c],ar2[r][c];
        count=1;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>ar1[i][j];
               if(ar1[i][j]=='-')
               {
                   ar2[i][j]='-';
               }
               else
               {
                   if(count%2==0)
                   {
                       ar2[i][j]='W';
                   }
                   else
                   {
                       ar2[i][j]='B';
                   }
               }
               count++;
            }
            if(c%2==0)
                count++;
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<ar2[i][j];
            }
            cout<<"\n";
        }

    }
}
