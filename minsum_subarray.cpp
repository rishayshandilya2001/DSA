
#include <iostream>

using namespace std;
#include<bits/stdc++.h>
int main()
{
    
    int a[4]={7,10,-113,14};
    int sum=0,minsum=INT_MAX;
    for(int i=0;i<4;i++)
    {
        sum+=a[i];
        if(sum<minsum)
        minsum=sum;
        
        if(sum>0)
        sum=0;
    }
    cout<<minsum;
}