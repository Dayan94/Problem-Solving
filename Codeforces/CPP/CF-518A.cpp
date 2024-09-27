#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main()
{
    char s[110];
    while(gets(s))
    {
        int l=strlen(s),i,cmp;
        char t[l];
        gets(t);
        if(strcmp(t,s)<=0)
            cout<<"No such string\n";
        for(i=l-1;i>=0;i--)
        {
            if(s[i]!='z')
            {
                s[i]++;
                break;
            }
            else
            {
                s[i]='a';
            }
        }
        cmp=strcmp(t,s);
        if(cmp<=0)
            cout<<"No such string\n";
            else
            {
                cout<<s<<endl;
            }
    }
}
