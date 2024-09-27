#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int a,b,c,total_data,total_time,required_time;
    while(cin>>a>>b>>c)
    {
        total_data=a*c;
        if(total_data%b==0)
        {
            total_time=total_data/b;
        }
        else
        {
            total_time=total_data/b +1;
        }
        required_time=total_time-c;
        cout<<required_time<<"\n";
    }
}
