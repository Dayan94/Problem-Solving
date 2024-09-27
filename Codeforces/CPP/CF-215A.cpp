#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m,i,j,c,ar[100000],pos=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    c=1;
    for(i=0;i<n;i++)
    {
        for(j=m-1;j>=0;j--)
        {
           if(b[j]%a[i]==0)
           {
               ar[pos]=b[j]/a[i];
               pos++;
           }
        }
    }
    sort(ar,ar+pos,greater<int>());
    for(i=0;i<pos;i++)
    {
        if(ar[i]!=ar[i+1])
        {
            break;
        }
        else
            c++;
    }
    cout<<c<<"\n";

}

		 	 	 	    			   	    				