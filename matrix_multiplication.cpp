#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int a[3][4]={2,4,1,2,8,4,3,6,1,7,9,5};
    int b[4][3]={1,2,3,4,5,6,7,8,9,4,5,6};
    int c[3][3];
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            int sum=0;
         for(k=0;k<4;k++)
         {
             sum+=a[i][k]*b[k][j];
             c[i][j]=sum;
         }
             
             
         
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
   
}