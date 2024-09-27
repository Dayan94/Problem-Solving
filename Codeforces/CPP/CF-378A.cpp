#include<stdio.h>
using namespace std;
int main()
{
    int x,y,xwin=0,draw=0,ywin=0,xval=0,yval=0;
    scanf("%d%d",&x,&y);
    for(int i=1;i<=6;i++)
    {
        xval=x-i;
        yval=y-i;
        if(xval<0)
        xval=-1*xval;
        if(yval<0)
        yval*=-1;
        if(xval<yval)
        xwin++;
        else if(xval>yval)
        ywin++;
        else draw++;
    }
    printf("%d %d %d",xwin,draw,ywin);
}
