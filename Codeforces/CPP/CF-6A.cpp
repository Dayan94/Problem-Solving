#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        if((a+b>c)&&(a+c>b)&&(b+c>a))
        {
            cout<<"TRIANGLE\n";
        }
        else if((b+c>d)&&(b+d>c)&&(c+d>b))
            {
                cout<<"TRIANGLE\n";
            }
        else if(a+c>d&&a+d>c&&c+d>a)
            {
                cout<<"TRIANGLE\n";
            }
       else if((b+a>d)&&(b+d>a)&&(a+d>b))
            {
                cout<<"TRIANGLE\n";
            }
      else if(a+b==c||a+b==d||a+c==b||a+c==d||a+d==c||a+d==b||b+c==a||b+c==d||b+d==a||b+d==c||c+d==a||c+d==b)
                cout<<"SEGMENT\n";

             else
                cout<<"IMPOSSIBLE\n";
    }
}

  	 		 		 			 	 	 			  		  		