#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<cmath>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<string>
#include<strstream>
using namespace std;
int main()
{
   char str[500];
   while(gets(str))
   {
        int l=strlen(str),i,j=-1,m;
        for(i=0;i<l;i++)
        {
            if(str[i]==' '&&i==0)
            {
                while(str[i]==' ')
                {
                    cout<<str[i++];
                }
            }

            if(str[i]==' ')
            {

                m=i;
                while(i!=j&&i!=0)
                {

                   cout<<str[--i];
                   if(i==0)
                    cout<<' ';

                }
                j=m;
                i=m;
            }
            else if(i==(l-1))
            {

                m=i;
                while(i!=j)
                {

                   cout<<str[i--];

                }
                j=m;
                i=m;
            }

        }
        cout<<endl;
   }
}

