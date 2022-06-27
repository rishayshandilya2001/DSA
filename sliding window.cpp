#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    int a[11]={4,1,3,5,1,2,3,2,1,1,5};
    int k=3;
    for(int i=0;i<=11-k;i++)
    {
        int max=INT_MIN;
        for(int j=i;j<i+k;j++)
        {
            if(a[j]>max)
            max=a[j];
        }
        cout<<max<<"  ";
    }
  
}