#include<stdio.h>
#include<iostream>

using namespace std;
int main()
{
    int N,i,j;
while( scanf("%d",&N) == 1 )
 {
	int ar[1000],flip=0,p=0;
	for(i=0;i<N;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<N;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                p=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=p;
                flip++;
            }
        }
    }
    cout<<"Minimum exchange operations : "<<flip<<endl;
 }
}
