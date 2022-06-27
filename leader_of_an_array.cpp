#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3]={30,20,10};
    for(int i=0;i<3;i++)
    {
       int count=0;
       for(int j=i;j<3;j++)
        {
            if(a[j]>a[i])
            count++;
        }
        if(count==0)
        cout<<a[i]<<" ";
    }
    
        
    
}
