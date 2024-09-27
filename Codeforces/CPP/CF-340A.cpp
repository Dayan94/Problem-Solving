#include<bits/stdc++.h>
using namespace std;
int GCD(int x,int y)
{
    return x%y==0?y:GCD(y,x%y);
}
int main()
{
    int x,y,a,b,lcm,gcd;
    ios_base::sync_with_stdio(false);
    cin>>x>>y>>a>>b;
    gcd=GCD(x,y);
    lcm=x*y/gcd;
    x=(a-1)/lcm;
    y=b/lcm;
    a=y-x;
    cout<<a<<"\n";
}

  			  	   			 					 	 	 					