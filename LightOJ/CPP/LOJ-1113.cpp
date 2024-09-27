#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,no=0;
    scanf("%d",&t);
    while(t--)
    {
        string s,add;
        printf("Case %d:\n",++no);
        s="";
        stack<string>st;
        stack<string>st1;
        add="http://www.lightoj.com/";
        st.push(add);
        while(cin>>s)
        {
            if(s[0]=='Q')
            break;

            if(s[0]=='V'){
                    cin>>add;
             cout<<add<<endl;
             st.push(add);
              if(!st1.empty())
              {
                  while(!st1.empty())
                    st1.pop();
              }
            }
            else
            {
                if(s[0]=='B')
                {
                    st1.push(st.top());
                    st.pop();
                    if(!st.empty()){
                     cout<<st.top()<<endl;
                    }
                    else{
                     printf("Ignored\n");
                     st.push(st1.top());
                     st1.pop();
                         }
                }
                else if(s[0]=='F')
                {
                    if(!st1.empty())
                    {
                        cout<<st1.top()<<endl;
                        st.push(st1.top());
                        st1.pop();
                    }
                    else
                    {
                        printf("Ignored\n");
                    }
                }
            }
        }
    }

    return 0;
}