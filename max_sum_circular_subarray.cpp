
#include <iostream>

using namespace std;
#include<bits/stdc++.h>
int main()
{
    
    int a[9]={2,1,-5,4,-3,1,-3,4,-1};
    int sum=0,minsum=INT_MAX;
    int asum=0;
    for(int i=0;i<9;i++)
    asum+=a[i];
    for(int i=0;i<9;i++)
    {
        sum+=a[i];
        if(sum<minsum)
        minsum=sum;
        
        if(sum>0)
        sum=0;
    }
    cout<<asum-minsum;
}