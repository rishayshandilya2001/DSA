#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[7]={2,3,10,6,4,8,1};
    int maxdiff;
    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            int diff=a[j]-a[i];
            if(diff>maxdiff)
            maxdiff=diff;
        }
    }
    cout<<maxdiff;
    
        
    
}
