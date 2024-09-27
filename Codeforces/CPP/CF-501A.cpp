#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    double mp,vp,mt,vt,mp1,mp2,vp1,vp2;
    while(cin>>mp>>vp>>mt>>vt)
    {
        mp1=(3*mp/10),mp2=(mp-mp*mt/250);
        vp1=(3*vp/10),vp2=(vp-vp*vt/250);
        mp1=max(mp1,mp2);
        vp1=max(vp1,vp2);
        if(mp1>vp1)
            cout<<"Misha\n";
        else if(mp1<vp1)
            cout<<"Vasya\n";
        else
            cout<<"Tie\n";
    }
}
